module tb_ALU;
    var logic [31:0] operand1;
    var logic [31:0] operand2;
    var logic [3:0]  ALUoperation;
    var logic [31:0] result;
    var logic      zero;

    // Instantiate the ALU
    ALU uut (
        .operand1(operand1),
        .operand2(operand2),
        .ALUoperation(ALUoperation),
        .result(result),
        .zero(zero)
    );

    initial begin
        $dumpfile("tb_ALU.vcd");
        $dumpvars(0, tb_ALU);

        // Test ADD (4'b0000)
        operand1 = 32'd10; operand2 = 32'd20; ALUoperation = 4'b0000;
        #10; $display("ADD: %d + %d = %d, zero=%b", operand1, operand2, result, zero);

        // Test SUB (4'b0001)
        operand1 = 32'd20; operand2 = 32'd10; ALUoperation = 4'b0001;
        #10; $display("SUB: %d - %d = %d, zero=%b", operand1, operand2, result, zero);
        
        // Test SUB result zero
        operand1 = 32'd10; operand2 = 32'd10; ALUoperation = 4'b0001;
        #10; $display("SUB: %d - %d = %d, zero=%b", operand1, operand2, result, zero);
        
        // Test AND (4'b0010)
        operand1 = 32'hFF00FF00; operand2 = 32'h00FF00FF; ALUoperation = 4'b0010;
        #10; $display("AND: %h & %h = %h", operand1, operand2, result);

        // Test OR (4'b0011)
        operand1 = 32'hFF00FF00; operand2 = 32'h00FF00FF; ALUoperation = 4'b0011;
        #10; $display("OR: %h | %h = %h", operand1, operand2, result);

        // Test XOR (4'b0100)
        operand1 = 32'hF0F0F0F0; operand2 = 32'h0F0F0F0F; ALUoperation = 4'b0100;
        #10; $display("XOR: %h ^ %h = %h", operand1, operand2, result);

        // Test SLL (4'b0101)
        operand1 = 32'h00000001; operand2 = 32'd4; ALUoperation = 4'b0101;
        #10; $display("SLL: %h << %d = %h", operand1, operand2[4:0], result);

        // Test SRL (4'b0110)
        operand1 = 32'h80000000; operand2 = 32'd4; ALUoperation = 4'b0110;
        #10; $display("SRL: %h >> %d = %h", operand1, operand2[4:0], result);

        // Test SRA (4'b0111)
        operand1 = 32'hF0000000; operand2 = 32'd4; ALUoperation = 4'b0111;
        #10; $display("SRA: %h >>> %d = %h", operand1, operand2[4:0], result);

        // Test SLT (4'b1000)
        operand1 = -32'd5; operand2 = 32'd10; ALUoperation = 4'b1000;
        #10; $display("SLT: %d < %d = %d", operand1, operand2, result);

        // Test SLTU (4'b1001)
        operand1 = 32'hFFFFFFF0; operand2 = 32'h00000010; ALUoperation = 4'b1001;
        #10; $display("SLTU: %h < %h = %d", operand1, operand2, result);

        #10;
        $finish;
    end
endmodule
