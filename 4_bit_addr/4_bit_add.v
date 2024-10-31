
module bit_add(
    input  [3:0] a,
    input  [3:0] b,
    input cin,
    output [3:0] s,
    output c
);
wire xc,yc,zc;
adder a_a (a[0],b[0],cin,s[0],xc);
adder b_b (a[1],b[1],xc,s[1],yc);
adder c_c (a[2],b[2],yc,s[2],zc);
adder d_d (a[3],b[3],zc,s[3],c);


endmodule
