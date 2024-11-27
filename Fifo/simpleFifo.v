module simpleFifo (

    input clk,
    input rst,
    input w_en,
    input r_en,
    input [7:0] data_in,
    output reg [7:0] data_out,
    output reg f_empty,
    output reg f_full

);

reg [7:0] memArray [0:8];
reg [3:0] w_ptr, r_ptr, count;

always @ (posedge clk or posedge rst) begin
    if (rst) begin
        r_ptr <= 0;
        w_ptr <= 0;
        count <= 0;
        f_full <= 0;
        f_empty <= 1;
    end 

    else begin 
        if( w_en && !f_full ) begin
            memArray[w_ptr] <= data_in;
            w_ptr <= (w_ptr +1) % 9;
            count <= count +1;
        end

        if ( r_en && !f_empty ) begin
            data_out <= memArray[r_ptr];
            r_ptr <= (r_ptr +1) % 9;
            count <= count - 1;
        end
    end
  
    f_full <= (count == 8);
    f_empty <= (count == 0);
end

endmodule