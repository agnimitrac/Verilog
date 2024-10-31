`timescale 1ps/1ps

module adder (
    input a, // it will be continously driven. by default they are wire
    input b,
    input cin,
    output s,
    output c
);

xor (s,a,b,cin);
and (c,a,b,cin);

endmodule