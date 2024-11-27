module tb_divide2;
reg clk;
reg rst;
wire clk_out;


divide2 m1 ( .clk(clk), .rst(rst), .clk_out(clk_out));

always #10 clk = ~clk;

initial begin
    $dumpfile("tb_divide2.vcd");
    $dumpvars(0, tb_divide2);
end

initial begin
rst <= 1'b1;
clk <= 1'b0;

#10
rst <= 1'b0;
#200
$finish;
end

endmodule