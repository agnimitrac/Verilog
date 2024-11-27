`default_nettype none

module tb_ri_fa;
reg clk;
reg signal;
wire rise;
wire fall;

ri_fa uut
(
    .clk (clk),
    .signal(signal),
    .rise(rise),
    .fall(fall)

);

localparam CLK_PERIOD = 10;
always #(CLK_PERIOD/2) clk=~clk;

initial begin
    $dumpfile("tb_ri_fa.vcd");
    $dumpvars(0, tb_ri_fa);
end

initial begin
   // Initialize signals
        clk = 0;
        signal = 0;
        
        // Test rising edge
        #10 signal = 1;  // Rising edge at time = 10ns
        #10 signal = 1;  // Hold high

        // Test falling edge
        #10 signal = 0;  // Falling edge at time = 30ns
        #10 signal = 0;  // Hold low

        // Another rising edge
        #10 signal = 1;  // Rising edge at time = 50ns
        #10 signal = 1;  // Hold high

        // Another falling edge
        #10 signal = 0;  // Falling edge at time = 70ns
        #10 signal = 0;  // Hold low

        // End simulation
        #20 $finish;
end

endmodule
`default_nettype wire