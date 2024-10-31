module adder(
    input a,
    input b,
    output c,
    output s
);

    assign s = a ^ b;  // Dataflow expression for sum
    assign c = a & b;  // Dataflow expression for carry

endmodule