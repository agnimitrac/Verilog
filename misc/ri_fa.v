module ri_fa (
    input clk,
    input signal,
    output reg rise,
    output reg fall
);
    
    reg prev_signal;

    always @( posedge clk) begin
        rise <= (signal & ~prev_signal);
        fall <= (~signal & prev_signal);
        prev_signal <= signal;
    end

endmodule