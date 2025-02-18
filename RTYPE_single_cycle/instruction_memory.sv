module instruction_memory (
    input var logic [31:0] address,
    output var logic [31:0] instruction
);
    
    var logic [31:0] memory [0:255]; // 256-word memory
    
    initial begin
memory[0] = 32'h402082B3;        // sub x5, x1, x2
memory[1] = 32'h00208133;         // add x2, x1, x2
memory[2] = 32'h0042E3B3;        //or x7 x5 x4
memory[3] = 32'h00B48633;       //add x12 x9 x11
memory[4] = 32'h00836533;        //or x10 x6 x8
memory[5] = 32'h40F68733;       //	sub x14 x13 x15
memory[6] = 32'h016A8A33;      //	add x20 x21 x22
memory[7] = 32'h005221B3;      //slt x3 x4 x5
memory[8] = 32'h00B4C633;      //xor x12 x9 x11
    end
    
    always_comb begin
        instruction = memory[address[31:2]]; // Word-aligned access
    end
    
endmodule