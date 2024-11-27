module clkby15 (
    input clk,
    input rst,
    output clk_out
);

    reg [3:0] posc, negc;

always @ (posedge clk) begin
    if (rst) begin
        posc <= 4'b0000;
    end
    else if (posc == 4'b1110) begin
        posc <= 4'b0000;
    end
    else begin
        posc <= posc + 1; 
    end
end

always @ (negedge clk) begin
    if (rst) begin
        negc <= 4'b0000;
    end
    else if (negc == 4'b1110) begin
        negc <= 4'b0000;
    end
    else begin
        negc <= negc + 1; 
    end
end

assign clk_out = (( posc > 7)| (negc > 7));

endmodule