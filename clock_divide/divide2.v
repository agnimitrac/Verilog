module divide2 (
    input clk,
    input rst,
    output reg clk_out
);


reg [1:0] count;

reg state;

always @ (posedge clk) begin

    if(rst) begin
        count <= 2'b00;
    end

    else if ( count == 2'b11) begin
        count <= 2'b00;
    end
    else count[1:0] <= count[1:0] +2'b01;
end

always @ (posedge clk) begin

    if(rst) begin
        clk_out = 0;
    end
    else if( count == 2'b11) begin
        clk_out = ~ clk_out;
    end
    else clk_out = clk_out;

end
endmodule