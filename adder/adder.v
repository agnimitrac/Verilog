`timescale 1ps/1ps

module adder (
    input a, // it will be continously driven. by default they are wire
    input b,
    output s,
    output c
);

xor (s,a,b);
and (c,a,b);

endmodule