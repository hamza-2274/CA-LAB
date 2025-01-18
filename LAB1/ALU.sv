module ALU(
    input var logic [31:0] operand1,
    input var logic [31:0] operand2,
    input var logic [3:0] ALUoperation,
    output var logic [31:0] result,
    output var logic zero
);
    always @(*) begin
        zero = 0;
        
        case(ALUoperation)
            4'b0000: result = operand1 & operand2;  // AND
            4'b0001: result = operand1 | operand2;  // OR
            4'b0010: result = operand1 + operand2;  // ADD
            4'b0110: result = operand1 - operand2;  // SUB
            default: result = 32'b0;  // Default case for unknown operation
        endcase
        
        //  result is zero
        if (result == 32'b0) begin
            zero = 1;
        end
    end
endmodule

