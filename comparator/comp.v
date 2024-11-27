module comp(
    input a,
    input b,
    output greater,
    output lesser,
    output equal
);

assign greater =  a & ~b;
assign lesser = ~a & b;
assign equal = ~( a ^ b);


endmodule