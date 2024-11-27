module packet_parse(
    input [5:0] payload,
    input clk,
    input rst,
    output reg [1:0] head,
    output reg [1:0] body,
    output reg [1:0] tail
);

reg [5:0] stage1, stage2, stage3;

always @ (posedge clk or posedge rst) begin
    if (rst) begin
        stage1 <= 6'b0;
        stage2 <= 6'b0;
        stage3 <= 6'b0;
        head <= 2'b0;
        body <= 2'b0;
        tail <= 2'b0;

    end

    else begin
    
        stage1 <= payload;
        stage2 <= stage1;
        stage3 <= stage2; 
    
    end

end

always @(*) begin
        head = stage1[5:4];
        body = stage2[3:2];
        tail = stage3[1:0];
end

endmodule

