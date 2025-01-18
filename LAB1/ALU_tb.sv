module ALU_tb;

    // Inputs to the ALU
    logic [31:0] operand1;
    logic [31:0] operand2;
    logic [3:0] ALUoperation;
    
    // Outputs from the ALU
    logic [31:0] result;
    logic zero;

    // Instantiate the ALU module
    ALU uut (
        .operand1(operand1),
        .operand2(operand2),
        .ALUoperation(ALUoperation),
        .result(result),
        .zero(zero)
    );

    initial begin
        $display("Starting Testbench");

        // Test 1: AND operation
        operand1 = 32'b10101010101010101010101010101010;
        operand2 = 32'b11001100110011001100110011001100;
        ALUoperation = 4'b0000;  // AND
        #10; 
        $display("AND Operation: result = %b, zero = %b", result, zero);

        // Test 2: OR operation
        operand1 = 32'b10101010101010101010101010101010;
        operand2 = 32'b11001100110011001100110011001100;
        ALUoperation = 4'b0001;  // OR
        #10;
        $display("OR Operation: result = %b, zero = %b", result, zero);

        // Test 3: ADD operation
        operand1 = 32'b00000000000000000000000000001010; // 10
        operand2 = 32'b00000000000000000000000000000101; // 5
        ALUoperation = 4'b0010;  // ADD
        #10;
        $display("ADD Operation: result = %d, zero = %b", result, zero);

        // Test 4: SUB operation
        operand1 = 32'b00000000000000000000000000001010; // 10
        operand2 = 32'b00000000000000000000000000000101; // 5
        ALUoperation = 4'b0110;  // SUB
        #10;
        $display("SUB Operation: result = %d, zero = %b", result, zero);

        // Zero flag 
        operand1 = 32'b00000000000000000000000000000000; // 0
        operand2 = 32'b00000000000000000000000000000000; // 0
        ALUoperation = 4'b0010;  // ADD (0 + 0)
        #10;
        $display("ADD Operation Zero Flag: result = %d, zero = %b", result, zero);

        // End simulation
        $finish;
    end


    initial begin
        $monitor("At time %t: operand1 = %b, operand2 = %b, ALUoperation = %b, result = %b, zero = %b",
                  $time, operand1, operand2, ALUoperation, result, zero);
    end

endmodule
