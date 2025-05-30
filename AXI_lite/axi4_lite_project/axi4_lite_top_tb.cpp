`timescale 1ns/1ps

module axi4_lite_top_tb;

  // DUT signals
  logic ACLK;
  logic ARESETN;
  logic write_s;
  logic read_s;
  logic [31:0] address;
  logic [31:0] W_data;
  logic [31:0] R_data;

  // Instantiate DUT
  axi4_lite_top dut (
    .ACLK(ACLK),
    .ARESETN(ARESETN),
    .write_s(write_s),
    .read_s(read_s),
    .address(address),
    .W_data(W_data),
    .R_data(R_data)
  );

  // Clock generation
  always #1 ACLK = ~ACLK;

  // Stimulus
  initial begin
    // Initialize signals
    ACLK = 0;
    ARESETN = 0;
    write_s = 0;
    read_s = 0;
    address = 0;
    W_data = 0;

    // Reset for 5 time units
    #10;
    ARESETN = 1;

    // Write at time 7 (sim_time in C++)
    #4; // Now at time 14ns (sim_time 7, since clk toggles every 1ns)
    write_s = 1;
    address = 5;
    W_data = 4;

    // Wait for 2 ns (sim_time 9), then stop writing
    #4;
    write_s = 0;

    // Wait until sim_time 21
    #24;
    read_s = 1;
    address = 5;

    // Wait until sim_time 23
    #4;
    read_s = 0;

    // Let simulation run until sim_time 40 (i.e., 80 ns)
    #32;

    $finish;
  end

  // Dump waveforms
  initial begin
    $dumpfile("waveform.vcd");
    $dumpvars(0, axi4_lite_top_tb);
  end

endmodule
