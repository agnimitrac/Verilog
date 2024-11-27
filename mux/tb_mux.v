module tb_mux;
reg [7:0] data;
reg [2:0] sel;
wire data_o;

muxi muc (
    .data(data),
    .sel(sel),
    .data_o(data_o)
); 

initial begin 
    data = 8'b0;
    sel = 3'b0;

    $monitor("data = %b  |  sel = %d  |  output = %b",data,sel,data_o);

    #10
    data = 8'b10011010;
    #10
    sel = 3'b001;
    #10
    sel = 3'b010;
    #10
    sel = 3'b011;
    #10
    sel = 3'b100;
    #10
    sel = 3'b101;
    #10
    sel = 3'b110;
    #10
    sel = 3'b111;
    #10
    $finish;

end

endmodule