`timescale 1ps/1ps

module bit_add_tb ();
reg [3:0] a;
reg [3:0] b;
reg cin;
wire [3:0] s;
wire c;

bit_add bit_add_dut(

    .a(a),
    .b(b),
    .cin(cin),
    .s(s),
    .c(c)
);

initial 
begin
    $dumpfile("bit_add_tb.vcd");
    $dumpvars(0, bit_add_tb);
end

initial 
begin
    a = 4'b0001;
    b = 4'b0010;
    cin = 1'b1;
    #4;
    a = 4'b0101;
    b = 4'b0110;
    cin = 1'b0;
    #4;
    a = 4'b1001;
    b = 4'b1010;
    cin = 1'b1;
    #4;
    a = 4'b0101;
    b = 4'b1110;
    cin = 1'b0;
    #4;
end
endmodule