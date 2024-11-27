module tb_clkby15;

reg clk;
reg rst;
wire clk_out;

clkby15 m1 (

    .clk(clk),
    .rst(rst),
    .clk_out(clk_out)
);

initial
    clk= 1'b0;
always
    #5  clk=~clk; 
initial begin
    #5 rst=1'b1;
    #10 rst=1'b0;
    #1000 $finish;
end
 
initial
    $monitor("clk=%b,reset=%b,clk_out=%b",clk,rst,clk_out);
 
initial begin
    $dumpfile("tb_clkby15.vcd");
    $dumpvars(0,tb_clkby15);
end 


endmodule