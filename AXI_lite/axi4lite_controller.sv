/*
    Name: axi4lite_controller.sv

    Description: Controller for cache to memory AXI4-Lite interface with address and data signals.
*/

module axi4lite_controller
(
    input logic clk, reset,

    // Cache/Processor interface
    input logic mem_wr_req, axi_valid,
    input logic [31:0] mem_address,       // Address from cache
    input logic [31:0] mem_wdata,         // Write data from cache
    output logic [31:0] mem_rdata,        // Read data to cache
    output logic axi_ready,

    // AXI4-Lite signals (control)
    input  logic arready, rvalid, awready, wready, bvalid,
    output logic arvalid, rready, awvalid, wvalid, bready,

    // AXI4-Lite signals (data/address)
    output logic [31:0] araddr,
    input  logic [31:0] rdata,
    output logic [31:0] awaddr,
    output logic [31:0] wdata
);

    typedef enum logic [2:0] {
        IDLE,
        HANDSHAKE_MEM_READ,
        MEM_READ,
        HANDSHAKE_MEM_WRITE,
        MEM_WRITE
    } type_axi_controller_states_e;

    type_axi_controller_states_e current_state, next_state;

    // State transition
    always_ff @(posedge clk or negedge reset) begin
        if (!reset)
            current_state <= IDLE;
        else
            current_state <= next_state;
    end

    // Combinational logic
    always_comb begin
        // Default outputs
        next_state = current_state;

        axi_ready = 0;
        arvalid   = 0;
        rready    = 0;
        awvalid   = 0;
        wvalid    = 0;
        bready    = 0;

        araddr = 32'd0;
        awaddr = 32'd0;
        wdata  = 32'd0;
        mem_rdata = 32'd0;

        case (current_state)
            IDLE: begin
                if (axi_valid && !mem_wr_req) begin
                    next_state = HANDSHAKE_MEM_READ;
                    arvalid = 1;
                    rready  = 1;
                    araddr  = mem_address;
                end
                else if (axi_valid && mem_wr_req) begin
                    next_state = HANDSHAKE_MEM_WRITE;
                    awvalid = 1;
                    wvalid  = 1;
                    bready  = 1;
                    awaddr  = mem_address;
                    wdata   = mem_wdata;
                end
            end

            HANDSHAKE_MEM_READ: begin
                arvalid = 1;
                rready  = 1;
                araddr  = mem_address;

                if (arready && rvalid) begin
                    next_state  = IDLE;
                    mem_rdata   = rdata;
                    axi_ready   = 1;
                end
                else if (arready && !rvalid) begin
                    next_state = MEM_READ;
                end
            end

            MEM_READ: begin
                rready = 1;
                if (rvalid) begin
                    next_state  = IDLE;
                    mem_rdata   = rdata;
                    axi_ready   = 1;
                end
            end

            HANDSHAKE_MEM_WRITE: begin
                awvalid = 1;
                wvalid  = 1;
                bready  = 1;
                awaddr  = mem_address;
                wdata   = mem_wdata;

                if (awready && wready && bvalid) begin
                    next_state = IDLE;
                    axi_ready  = 1;
                end
                else if (awready && wready && !bvalid) begin
                    next_state = MEM_WRITE;
                end
            end

            MEM_WRITE: begin
                bready = 1;
                if (bvalid) begin
                    next_state = IDLE;
                    axi_ready  = 1;
                end
            end

            default: begin
                next_state = IDLE;
            end
        endcase
    end

endmodule
