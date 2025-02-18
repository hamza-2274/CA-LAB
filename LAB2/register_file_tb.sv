`timescale 1ns / 1ps

module register_file_tb;
    // Declare testbench variables
    logic [3:0] read_register_1, read_register_2, write_register;
    logic clock, reset, write_en;
    logic [31:0] data_write;
    logic [31:0] read_data_1, read_data_2;

    // Instantiate the DUT (Device Under Test)
    register_file dut (
        .read_register_1(read_register_1),
        .read_register_2(read_register_2),
        .clock(clock),
        .write_register(write_register),
        .data_write(data_write),
        .reset(reset),
        .write_en(write_en),
        .read_data_1(read_data_1),
        .read_data_2(read_data_2)
    );

    // Clock Generation (100 MHz -> 10 ns period, toggle every 5 ns)
    always #5 clock = ~clock;

    // Test Sequence
    initial begin
        // Initialize signals
        clock = 0;
        reset = 1;
        write_en = 0;
        data_write = 32'h00000000;
        read_register_1 = 4'd0;
        read_register_2 = 4'd1;
        write_register = 4'd0;

        // Apply reset and check if all registers are set to 0
        #10 reset = 0;

        // Write random values to 10 different registers
        for (int i = 0; i < 10; i++) begin
            #10;
            write_register = $random % 16;  // Choose a random register (0-15)
            data_write = $random;           // Assign a random 32-bit value
            write_en = 1;                   // Enable write
        end
        write_en = 0; // Disable write after random writes

        // Read from random registers
        for (int i = 0; i < 5; i++) begin
            #10;
            read_register_1 = $random % 16; // Choose a random register for read 1
            read_register_2 = $random % 16; // Choose a different random register for read 2
        end

        // Apply reset again
      //  #10 reset = 1;
       // #10 reset = 0;

        // Read again after reset
        read_register_1 = 4'd0;
        read_register_2 = 4'd1;
        #10;

        // End simulation
        #50 $finish;
    end

    // Monitor Outputs
    initial begin
        $monitor("Time = %0t | WR_EN = %b | WR_REG = %h | DATA_WR = %h | RD_REG1 = %h | RD_DATA1 = %h | RD_REG2 = %h | RD_DATA2 = %h", 
                 $time, write_en, write_register, data_write, read_register_1, read_data_1, read_register_2, read_data_2);
    end

endmodule
