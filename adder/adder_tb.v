`timescale 1ps/1ps



module adder_tb;
reg a; // stimuli from tb, not continusly driven, we use reg
reg b; // inputs

wire s;
wire c; // outputs
 
adder adder_dut(
    .a(a),
    .b(b),
    .s(s),
    .c(c)
);


initial begin
    $dumpfile("adder_tb.vcd");
    $dumpvars(0, adder_tb);
end

initial begin
    a = 1'b0;
    b = 1'b0;
    #2;
    a = 1'b1;
    b = 1'b0;
    #2;
    a = 1'b1;
    b = 1'b1;
    #2;
    a = 1'b0;
    b = 1'b1;
    #2;

end

endmodule
