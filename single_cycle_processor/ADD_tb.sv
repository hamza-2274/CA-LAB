module ADD_tb;

    // Inputs and outputs for ADD module
    logic [31:0] operand1;
    logic [31:0] operand2;
    logic [31:0] sum;

    // Instantiate the ADD module
    ADD uut (
        .operand1(operand1),
        .operand2(operand2),
        .sum(sum)
    );

    // Randomization of inputs
    initial begin
        $display("Starting ADD Testbench");

        // Test for 10 random cases
        repeat (10) begin
            // Generate random values for operand1 and operand2
            operand1 = $random;
            operand2 = $random;

            // Wait for combinational logic to compute
            #10;

            // Display the results
            $display("Test case: operand1 = %d, operand2 = %d, sum = %d", operand1, operand2, sum);
        end

        // End simulation
        $finish;
    end

endmodule
