module tri_buff ( input a, output b, input en);

    assign b = (en) ? a : 1'bz;

endmodule
