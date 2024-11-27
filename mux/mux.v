module muxi (
    input [7:0] data,
    input [2:0] sel,
    output data_o
);

    assign data_o = data [ sel[2:0]];

endmodule