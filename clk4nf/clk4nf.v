module clkby15 (
    input clk,
    input rst,
    output clk_out
);

    reg [2:0] posc, negc;

always @ (posedge clk) begin
    if (rst) begin
        posc <= 3'b000;
    end
    else if (posc == 3'b100) begin
        posc <= 3'b000;
    end
    else begin
        posc <= posc + 1; 
    end
end

always @ (negedge clk) begin
    if (rst) begin
        negc <= 3'b000;
    end
    else if (negc == 3'b100) begin
        negc <= 3'b000;
    end
    else begin
        negc <= negc + 1; 
    end
end

assign clk_out = 

endmodule