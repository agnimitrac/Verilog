// 1101

module patternDetect (
    input clk,
    input rst,
    input inp,
    output reg detect
);
    
    localparam:
    Idle   = 3'b100;
    State0 = 3'b000;
    State1 = 3'b001;
    State2 = 3'b010;
    State3 = 3'b011;

    reg [3:0] current_state, next_state;

    always @ ( posedge clk) begin
        if(rst) begin
            current_state <= Idle;
        end
        else begin
            current_state <= next_state;
        end
    end

    always @(*) begin
        case ( current_state)
            Idle: begin
                if( in == 1'b0) begin
                    next_state <= Idle;
                end
                else begin
                    next_state <= state0;
                end
            end

            State0: begin
                if( in == 1'b0) begin
                    next_state <= Idle;
                end
                else begin
                    next_state <= state1;
                end
            end

            State1: begin
                if( in == 1'b0) begin
                    next_state <= State2;
                end
                else begin
                    next_state <= state0;
                end
            end

            State2: begin
                if( in == 1'b1) begin
                    next_state <= state3;
                end
                else begin
                    next_state <= Idle;
                end
            end

            State3: begin
                if( in == 1'b1) begin
                    next_state <= State1;
                end
                else begin
                    next_state <= Idle;
                end
            end

        endcase
    end

    always @ ( *) begin
        detect = ( current_state == state3);
    end




endmodule