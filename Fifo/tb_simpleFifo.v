`timescale 1ns / 1ps

module tb_simpleFifo;

    // Testbench signals
    reg clk;
    reg rst;
    reg w_en;
    reg r_en;
    reg [7:0] data_in;
    wire [7:0] data_out;
    wire f_empty;
    wire f_full;

    // Instantiate the simpleFifo module
    simpleFifo uut (
        .clk(clk),
        .rst(rst),
        .w_en(w_en),
        .r_en(r_en),
        .data_in(data_in),
        .data_out(data_out),
        .f_empty(f_empty),
        .f_full(f_full)
    );

    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk; // 10ns clock period
    end

    // Test procedure
    initial begin
        // Initialize signals
        rst = 1;
        w_en = 0;
        r_en = 0;
        data_in = 0;

        // Reset the FIFO
        #10 rst = 0;

        // Write data into the FIFO
        write_fifo(8'hA1); // Write 0xA1
        write_fifo(8'hB2); // Write 0xB2
        write_fifo(8'hC3); // Write 0xC3

        // Read data from the FIFO
        read_fifo(); // Expect 0xA1
        read_fifo(); // Expect 0xB2
        read_fifo(); // Expect 0xC3

        // Test FIFO full condition
        for (integer i = 0; i < 11; i = i + 1) begin
            write_fifo(i); // Write sequential values
        end
        $display("FIFO full status: %b", f_full); // Should be 1

        // Test FIFO empty condition
        for (integer i = 0; i < 9; i = i + 1) begin
            read_fifo(); // Read all values
        end
        $display("FIFO empty status: %b", f_empty); // Should be 1

        $finish;
    end

    // Task to write data into the FIFO
    task write_fifo(input [7:0] value);
        begin
            if (!f_full) begin
                data_in = value;
                w_en = 1;
                #10; // Wait one clock cycle
                w_en = 0;
            end else begin
                $display("Attempt to write when FIFO is full!");
            end
        end
    endtask

    // Task to read data from the FIFO
    task read_fifo();
        begin
            if (!f_empty) begin
                r_en = 1;
                #10; // Wait one clock cycle
                r_en = 0;
                $display("Read data: %h", data_out);
            end else begin
                $display("Attempt to read when FIFO is empty!");
            end
        end
    endtask

endmodule
