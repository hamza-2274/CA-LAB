module PC_Adder_tb;

    // Inputs and outputs for PC_Adder
    logic [31:0] operand1;
    logic [31:0] sum;

    // Instantiate the PC_Adder module
    PC_Adder uut (
        .operand1(operand1),
        .sum(sum)
    );

    // Randomization of input
    initial begin
        $display("Starting PC_Adder Testbench");

        // Test for 10 random cases
        repeat (10) begin
            // Generate a random value for operand1
            operand1 = $random;
            
            // Wait for combinational logic to compute
            #10;
            
            // Display the results
            $display("Test case: operand1 = %d, sum = %d", operand1, sum);
        end

        // End simulation
        $finish;
    end

endmodule
