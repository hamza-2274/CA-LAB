module instruction_memory (
    input var logic [31:0] address,
    output var logic [31:0] instruction
);
    
    var logic [31:0] memory [0:255]; // 256-word memory
    
    initial begin
memory[0]  = 32'h02500193;  
memory[1]  = 32'h02000513;
memory[2]  = 32'h00A1F0B3;
memory[3]  = 32'h00A52223;
memory[4]  = 32'h00452483;
memory[5]  = 32'h00851e63;
memory[6]  = 32'h003562B3;
memory[7]  = 32'h403502B3;



    end
    
    always_comb begin
        instruction = memory[address[31:2]]; // Word-aligned access
    end
    
endmodule