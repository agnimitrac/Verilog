module adder_tb;
  // Declare registers
  reg d;    // Register 'd' for input 'a'
  reg e;    // Register 'e' for input 'b'
  
  // Declare wires
  wire f;   // Wire 'f' for output 's' (Sum)
  wire g;   // Wire 'g' for output 'c' (Carry)
  
  // Instantiate half_adder module
  adder half2_adder (.a(d), .b(e), .s(f), .c(g));
  
  // Initial block for simulation
  initial begin
    $dumpfile("aditya.vcd");
    $dumpvars(0, half1_adder); // Enable waveform dumping for simulation
    
    // Test case 1
    d = 1'b1;                   // Assign input 'a' as 1
    $display("a=%b", d);        // Display value of input 'a'
    e = 1'b1;                   // Assign input 'b' as 1
    $display("b=%b", e);        // Display value of input 'b'
    #10;                        // Wait for 10 time units
    $display("s=%b", f);        // Display value of output 's' (Sum)
    $display("c=%b", g);        // Display value of output 'c' (Carry)
    
    // Test case 2
    d = 1'b0;                   // Assign input 'a' as 0
    $display("a=%b", d);        // Display value of input 'a'
    e = 1'b1;                   // Assign input 'b' as 1
    $display("b=%b", e);        // Display value of input 'b'
    #10;                        // Wait for 10 time units
    $display("s=%b", f);        // Display value of output 's' (Sum)
    $display("c=%b", g);        // Display value of output 'c' (Carry)
    
    // Test case 3
    d = 1'b1;                   // Assign input 'a' as 1
    $display("a=%b", d);        // Display value of input 'a'
    e = 1'b0;                   // Assign input 'b' as 0
    $display("b=%b", e);        // Display value of input 'b'
    #10;                        // Wait for 10 time units
    $display("s=%b", f);        // Display value of output 's' (Sum)
    $display("c=%b", g);        // Display value of output 'c' (Carry)
    
    // Test case 4
    d = 1'b0;                   // Assign input 'a' as 0
    $display("a=%b", d);        // Display value of input 'a'
    e = 1'b0;                   // Assign input 'b' as 0
    $display("b=%b", e);        // Display value of input 'b'
    #10;                        // Wait for 10 time units
    $display("s=%b", f);        // Display value of output 's' (Sum)
    $display("c=%b", g);        // Display value of output 'c' (Carry)
  end
endmodule