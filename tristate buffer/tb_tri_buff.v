
module tb_tri_buff;
reg a;
reg en;
wire b;

tri_buff gate1(.a(a), .b(b), .en(en));



initial begin

    a = 0;
    en = 0;

    $monitor(" a = %b | en = %b | b = %b", a,en,b);
    
    // enable is 1
    #10 en = 1;

    // a becomes 1

    #10 a = 1;

    // enbale is 0

    #10 en = 0;

    #10 $finish;


end

endmodule