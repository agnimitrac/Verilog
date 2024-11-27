module tb_comp;

reg a;
reg b;
wire greater;
wire lesser;
wire equal;

comp c1( .a(a), .b(b), .greater(greater), .lesser(lesser), .equal(equal));

initial begin

    $monitor(" a = %b  | b = %b  |  greater = %b  |  lesser = %b  |  equal = %b", a,b,greater,lesser,equal);
    a = 0;
    b = 0;
    
    #10
    a = 0;
    b = 1;

    #10
    a = 1;
    b = 1;

    #10
    a = 1;
    b = 0;


end

endmodule