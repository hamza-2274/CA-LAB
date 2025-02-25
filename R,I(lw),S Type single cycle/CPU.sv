module CPU (
    input logic clock,
    input logic reset,
    output logic [31:0] instruction,
    output logic [31:0] ALU_result,
    output logic zero
);
    
    logic [31:0] pc_out;
    logic [31:0] pc_next;
     logic [31:0]  mux_out;
    logic [31:0]  imm_to_bin;
    logic [31:0]  data_write_back_to_reg;
    logic [31:0] read_data_1, read_data_2;
    logic [31:0] read_data_to_bin;
    logic [3:0] ALU_control;
    logic register_write_enable;

    logic [2:0] imm_sel;
    
    // Instantiate the PC module
    PC program_counter (
        .pc_in(pc_next),
        .reset(reset),
        .clock(clock),
        .pc_out(pc_out)
    );
    

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
        .register_write_enable(register_write_enable),
        . opsel(opsel),
        . immsrc(imm_sel),
        .mem_to_reg(mem_to_reg),
        .mem_write(mem_write),
        .mem_read(mem_read)
    );
    
    // Instantiate the Register File module
    register_file reg_file (
        .read_register_1(instruction[19:15]),
        .read_register_2(instruction[24:20]),
        .clock(clock),
        .write_register(instruction[11:7]),
        .data_write( data_write_back_to_reg),
        .reset(reset),
        .write_en(register_write_enable),
        .read_data_1(read_data_1),
        .read_data_2(read_data_2)
    );
      mux2x1 mux_rs2_imm (
        .a_in(read_data_2), 
        .b_in(imm_to_bin),    
        .sel(opsel),      
        .z_out(mux_out)    
    );
   ALU alu (
        .operand1(read_data_1),
        .operand2(mux_out),  
        .ALUoperation(ALU_control),
        .result(ALU_result),
        .zero(zero)
    );
    imm_generator imm_generator_inst(
        .instr(instruction),
        . imm_src(imm_sel),
        .imm_out(imm_to_bin)
    );
    Data_memory Data_memory_inst(
        .Add(ALU_result),
        .write_data(read_data_2),
        .clock(clock),
        .reset(reset),
        .mem_write(mem_write),
        .mem_read(mem_read),
        .read_data(read_data_to_bin)
    );
      mux2x1 mux_writeback (
        .a_in(ALU_result), 
        .b_in(read_data_to_bin),      
        .sel(mem_to_reg),       
        .z_out( data_write_back_to_reg)      
    );
endmodule
