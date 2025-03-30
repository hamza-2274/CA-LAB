module tb_instruction_memory;

    logic [31:0] address;
    logic [31:0] instruction;

    // Instantiate the instruction memory module
    instruction_memory uut (
        .address(address),
        .instruction(instruction)
    );

    initial begin
        // Test different addresses
        for (int i = 0; i < 10; i++) begin
            address = i * 4;
            #5;
            $display("Address: %h, Instruction: %h", address, instruction);
        end
        #10 $finish;
    end

endmodule
