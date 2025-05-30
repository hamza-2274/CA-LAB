/*
    Name: axi4lite_controller_tb.sv

    Description: Modelsim testbench for axi4lite_controller.sv (with address and data support)
*/

module axi4lite_controller_tb();

    parameter NUM_RANDOM_TESTS = 20;
    parameter RAND_DELAY = 5;
    parameter RANDOM_SEED = 24;

    logic clk, reset;
    logic mem_wr_req, axi_valid;
    logic [31:0] mem_address, mem_wdata, mem_rdata;
    logic axi_ready;

    logic arready, rvalid, awready, wready, bvalid;
    logic arvalid, rready, awvalid, wvalid, bready;

    logic [31:0] araddr, awaddr, wdata, rdata;

    // Instantiate the DUT
    axi4lite_controller DUT (
        .clk(clk),
        .reset(reset),

        .mem_wr_req(mem_wr_req),
        .axi_valid(axi_valid),
        .mem_address(mem_address),
        .mem_wdata(mem_wdata),
        .mem_rdata(mem_rdata),
        .axi_ready(axi_ready),

        .arready(arready),
        .rvalid(rvalid),
        .awready(awready),
        .wready(wready),
        .bvalid(bvalid),

        .arvalid(arvalid),
        .rready(rready),
        .awvalid(awvalid),
        .wvalid(wvalid),
        .bready(bready),

        .araddr(araddr),
        .rdata(rdata),
        .awaddr(awaddr),
        .wdata(wdata)
    );

    // Clock generation
    initial begin
        clk = 1;
        forever #5 clk = ~clk;
    end

    // Main test sequence
    initial begin
        init_sequence();
        reset_sequence();
        @(posedge clk);

        $urandom(RANDOM_SEED);
        $display("\n\n--- Tests starting ---\n");

        fork
            processor_driver();
            memory_arready_driver();
            memory_rvalid_driver();
            memory_awready_wready_driver();
            memory_bvalid_driver();
        join_any

        $display("\n--- Tests completed ---\n");
        repeat(5) @(posedge clk);
        $finish();
    end

    int i;
    task processor_driver();
        for (i = 0; i < NUM_RANDOM_TESTS; i++) begin
            repeat($urandom % RAND_DELAY) @(posedge clk);

            // Randomize request type and values
            mem_wr_req   = $urandom % 2;
            mem_address  = $urandom;
            mem_wdata    = $urandom;
            axi_valid    = 1;

            @(posedge clk);
            while (!axi_ready)
                @(posedge clk);

            axi_valid = 0;

            if (!mem_wr_req)
                $display("Read Addr: 0x%08x => Data: 0x%08x", mem_address, mem_rdata);
            else
                $display("Write Addr: 0x%08x <= Data: 0x%08x", mem_address, mem_wdata);
        end
    endtask

    task memory_arready_driver();
        forever begin
            @(posedge clk)
            while (!arvalid)
                @(posedge clk);

            repeat($urandom % RAND_DELAY) @(posedge clk);
            arready = 1;
            @(posedge clk);
            arready = 0;
        end
    endtask

    task memory_rvalid_driver();
        forever begin
            @(posedge clk)
            while (!rready)
                @(posedge clk);

            repeat($urandom % RAND_DELAY) @(posedge clk);
            rdata = $urandom;  // Simulate memory sending back data
            rvalid = 1;
            @(posedge clk);
            rvalid = 0;
        end
    endtask

    task memory_awready_wready_driver();
        forever begin
            @(posedge clk)
            while (!(awvalid && wvalid))
                @(posedge clk);

            repeat($urandom % RAND_DELAY) @(posedge clk);
            awready = 1;
            wready = 1;
            @(posedge clk);
            awready = 0;
            wready = 0;
        end
    endtask

    task memory_bvalid_driver();
        forever begin
            @(posedge clk)
            while (!bready)
                @(posedge clk);

            repeat($urandom % RAND_DELAY) @(posedge clk);
            bvalid = 1;
            @(posedge clk);
            bvalid = 0;
        end
    endtask

    task init_sequence();
        reset = 1;
        axi_valid = 0;
        mem_wr_req = 0;
        mem_address = 32'd0;
        mem_wdata = 32'd0;
        arready = 0;
        rvalid = 0;
        awready = 0;
        wready = 0;
        bvalid = 0;
        rdata  = 32'd0;
        @(posedge clk);
    endtask

    task reset_sequence();
        #7 reset = 0;
        #55 reset = 1;
    endtask

endmodule
