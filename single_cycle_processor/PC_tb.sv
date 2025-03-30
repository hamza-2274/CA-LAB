`timescale 1ns / 1ps

module PC_tb;
    // Declare testbench variables
    logic [31:0] pc_in;
    logic reset;
    logic clock;
    logic [31:0] pc_out;

    // Instantiate the DUT (Device Under Test)
    PC dut (
        .pc_in(pc_in),
        .reset(reset),
        .clock(clock),
        .pc_out(pc_out)
    );

    // Clock Generation: Toggle every 5 ns (100 MHz frequency)
    always #5 clock = ~clock;

    // Test Sequence
    initial begin
        // Initialize signals
        clock = 0;
        reset = 1;
        pc_in = 32'h00000000;

        // Apply reset and check if pc_out resets to 0
        #10 reset = 0;

        // Apply random PC values
        repeat (10) begin
            #10 pc_in = $random;  // Assign random values to pc_in
        end

        // Apply Reset Again
        #10 reset = 1;
        #10 reset = 0;

        // More Random Inputs
        repeat (5) begin
            #10 pc_in = $random;
        end

        // End simulation
        #50 $finish;
    end

    // Monitor Outputs
    initial begin
        $monitor("Time = %0t | PC_IN = %h | RESET = %b | PC_OUT = %h", 
                 $time, pc_in, reset, pc_out);
    end

endmodule
