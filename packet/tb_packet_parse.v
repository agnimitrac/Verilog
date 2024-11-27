module tb_packet_parse;

reg clk;
reg rst;
reg [5:0] payload;
wire [1:0] head;
wire [1:0] body;
wire [1:0] tail;


packet_parse p1 ( .clk(clk), .rst(rst), .payload(payload), .head(head), .body(body), .tail(tail));

always #5 clk = ~clk;

initial begin 

rst = 1'b1;
clk = 0;
payload = 6'b000000;
$monitor( "head = %b  |  body = %b  |  tail = %b", head, body, tail);
#5
rst = 1'b0;

#10
clk = 1;
payload = 6'b010101;

#10
payload = 6'b101010;

#10
payload = 6'b111111;

#10
payload = 6'b010000;

#10
payload = 6'b000100;

#10
payload = 6'b000001;

#10
payload = 6'b010001;

#30
$finish;

end

endmodule