module Data_memory_tb;

    logic [31:0] Add;
    logic [31:0] write_data;
    logic clock;
    logic reset;
    logic mem_write;
    logic mem_read;
    logic [31:0] read_data;

    // Instantiate Data Memory
    Data_memory uut (
        .Add(Add),
        .write_data(write_data),
        .clock(clock),
        .reset(reset),
        .mem_write(mem_write),
        .mem_read(mem_read),
        .read_data(read_data)
    );

    // Clock Generation
    always #5 clock = ~clock; // 10ns period

    initial begin
        $dumpfile("Data_memory_tb.vcd");
        $dumpvars(0, Data_memory_tb);
        
        clock = 0;
        reset = 1;
        mem_write = 0;
        mem_read = 0;
        Add = 0;
        write_data = 0;

        // Reset memory
        #10 reset = 0;

        for (int i = 0; i < 5; i++) begin
            Add = i * 4; 
            write_data = $random;
            mem_write = 1;
            #10;
            mem_write = 0;
        end

        // Read back 
        #10;
        for (int i = 0; i < 5; i++) begin
            Add = i * 4;
            mem_read = 1;
            #10;
            $display("Address: %h, Read Data: %h", Add, read_data);
            mem_read = 0;
        end


        #20 $finish;
    end

endmodule
