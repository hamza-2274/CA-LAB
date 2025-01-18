module mux2x1_tb;

    // Inputs and outputs for mux2x1
    logic [31:0] a_in;
    logic [31:0] b_in;
    logic sel;
    logic [31:0] z_out;

    // Instantiate the mux2x1 module
    mux2x1 uut (
        .a_in(a_in),
        .b_in(b_in),
        .sel(sel),
        .z_out(z_out)
    );

    // Test procedure
    initial begin
        $display("Starting mux2x1 Testbench");

        // Test for multiple cases with fixed sel values
        repeat (10) begin
            // Generate random values for a_in and b_in
            a_in = $random;
            b_in = $random;

            // Test case with sel = 0
            sel = 0;
            #10; // Wait for logic to settle
            $display("sel = %b, a_in = %d, b_in = %d, z_out = %d (Expected: %d)", 
                     sel, a_in, b_in, z_out, a_in);

            // Test case with sel = 1
            sel = 1;
            #10; // Wait for logic to settle
            $display("sel = %b, a_in = %d, b_in = %d, z_out = %d (Expected: %d)", 
                     sel, a_in, b_in, z_out, b_in);
        end

        // End simulation
        $finish;
    end

endmodule
