module CPU (
    input logic clock,
    input logic reset,
    output logic [31:0] instruction,
    output logic [31:0] ALU_result,
    output logic zero
);
    
    logic [31:0] pc_out;
    logic [31:0] pc_next;
    logic [31:0] read_data_1, read_data_2;
    logic [3:0] ALU_control;
    logic register_write_enable;
    
    // Instantiate the PC module
    PC program_counter (
        .pc_in(pc_next),
        .reset(reset),
        .clock(clock),
        .pc_out(pc_out)
    );
    
    // Instantiate the PC Adder module
    PC_Adder pc_adder (
        .operand1(pc_out),
        .sum(pc_next)
    );
    
    // Instantiate the Instruction Memory module
    instruction_memory inst_mem (
        .address(pc_out),
        .instruction(instruction)
    );
    
    // Instantiate the Controller module
    controller ctrl (
        .instruction(instruction),
        .ALU_control(ALU_control),
        .register_write_enable(register_write_enable)
    );
    
    // Instantiate the Register File module
    register_file reg_file (
        .read_register_1(instruction[19:15]),
        .read_register_2(instruction[24:20]),
        .clock(clock),
        .write_register(instruction[11:7]),
        .data_write(ALU_result),
        .reset(reset),
        .write_en(register_write_enable), // Connected to controller output
        .read_data_1(read_data_1),
        .read_data_2(read_data_2)
    );
    
    // Instantiate the ALU module
    ALU alu (
        .operand1(read_data_1),
        .operand2(read_data_2),
        .ALUoperation(ALU_control), // Connected to controller output
        .result(ALU_result),
        .zero(zero)
    );
    
endmodule
