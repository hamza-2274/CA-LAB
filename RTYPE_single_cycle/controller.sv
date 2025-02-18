module controller (
    input var logic [31:0] instruction,
    output var logic [3:0] ALU_control,
    output var logic register_write_enable
);

    var logic [6:0] op;
    var logic [6:0] func7;
    var logic [2:0] func3;

    // Extract instruction fields
    always_comb begin
        op    = instruction[6:0];      // opcode
        func7 = instruction[31:25];     // funct7 (R-type)
        func3 = instruction[14:12];     // funct3 (R-type)
    end

    // Determine write enable for opcodes: 
    //load (0000011), R-type (0110011), LUI (0110111), 
    //AUIPC (0010111), JAL (1101111), I-type arithmetic (0010011)

    always_comb begin
        if (op == 7'b0000011 || op == 7'b0110011 || op == 7'b0110111 ||
            op == 7'b0010111 || op == 7'b1101111 || op == 7'b0010011)
            register_write_enable = 1'b1;
        else
            register_write_enable = 1'b0;
    end



    // ALU control for R-type instructions (opcode 0110011)
    always_comb begin
      //  ALU_control = 4'b0000;
        if (op == 7'b0110011) begin
            case ({func7, func3})
                10'b0000000_000: ALU_control = 4'b0000; // ADD
                10'b0100000_000: ALU_control = 4'b0001; // SUB
                10'b0000000_111: ALU_control = 4'b0010; // AND
                10'b0000000_110: ALU_control = 4'b0011; // OR
                10'b0000000_100: ALU_control = 4'b0100; // XOR
                10'b0000000_001: ALU_control = 4'b0101; // SLL
                10'b0000000_101: ALU_control = 4'b0110; // SRL
                10'b0100000_101: ALU_control = 4'b0111; // SRA
                10'b0000000_010: ALU_control = 4'b1000; // SLT
                10'b0000000_011: ALU_control = 4'b1001; // SLTU
                default:         ALU_control = 4'b0000;
            endcase
        end
    end

endmodule
