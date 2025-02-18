module tb_Data_memory;

    logic [31:0] Add;
    logic clock;
    logic reset;
    logic mem_write;
    logic mem_read;
    logic [31:0] read_data;

    // Instantiate Data Memory
    Data_memory uut (
        .Add(Add),
        .write_data(32'h00000000), // No writes
        .clock(clock),
        .reset(reset),
        .mem_write(mem_write),
        .mem_read(mem_read),
        .read_data(read_data)
    );

    // Clock Generation
    always #5 clock = ~clock; // Clock period = 10ns

    initial begin
        $dumpfile("tb_Data_memory.vcd");
        $dumpvars(0, tb_Data_memory);
        
        // Initialize signals
        clock = 0;
        reset = 0;
        mem_write = 0;
        mem_read = 0;
        Add = 0;

        // Reset memory and load data from the file
        #10 reset = 0;
        
        $display("\n=== Reading Data from Memory ===");

        // Read first 10 memory locations (adjust as needed)
        for (int i = 0; i < 10; i++) begin
            Add = i * 4; // Word-aligned address
            mem_read = 1;
            #10;
            $display("Address: %h, Read Data: %h", Add, read_data);
            mem_read = 0;
        end

        // End simulation
        #20 $finish;
    end

endmodule
