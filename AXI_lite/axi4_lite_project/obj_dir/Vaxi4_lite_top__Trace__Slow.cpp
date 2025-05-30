// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vaxi4_lite_top__Syms.h"


//======================

void Vaxi4_lite_top::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vaxi4_lite_top::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vaxi4_lite_top__Syms* __restrict vlSymsp = static_cast<Vaxi4_lite_top__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vaxi4_lite_top::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vaxi4_lite_top::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vaxi4_lite_top__Syms* __restrict vlSymsp = static_cast<Vaxi4_lite_top__Syms*>(userp);
    Vaxi4_lite_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vaxi4_lite_top::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vaxi4_lite_top__Syms* __restrict vlSymsp = static_cast<Vaxi4_lite_top__Syms*>(userp);
    Vaxi4_lite_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+54,"ACLK", false,-1);
        tracep->declBit(c+55,"ARESETN", false,-1);
        tracep->declBit(c+56,"read_s", false,-1);
        tracep->declBit(c+57,"write_s", false,-1);
        tracep->declBus(c+58,"address", false,-1, 31,0);
        tracep->declBus(c+59,"W_data", false,-1, 31,0);
        tracep->declBus(c+60,"R_data", false,-1, 31,0);
        tracep->declBus(c+64,"axi4_lite_top DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+64,"axi4_lite_top ADDRESS", false,-1, 31,0);
        tracep->declBit(c+54,"axi4_lite_top ACLK", false,-1);
        tracep->declBit(c+55,"axi4_lite_top ARESETN", false,-1);
        tracep->declBit(c+56,"axi4_lite_top read_s", false,-1);
        tracep->declBit(c+57,"axi4_lite_top write_s", false,-1);
        tracep->declBus(c+58,"axi4_lite_top address", false,-1, 31,0);
        tracep->declBus(c+59,"axi4_lite_top W_data", false,-1, 31,0);
        tracep->declBus(c+60,"axi4_lite_top R_data", false,-1, 31,0);
        tracep->declBit(c+1,"axi4_lite_top M_ARREADY", false,-1);
        tracep->declBit(c+2,"axi4_lite_top S_RVALID", false,-1);
        tracep->declBit(c+3,"axi4_lite_top M_ARVALID", false,-1);
        tracep->declBit(c+4,"axi4_lite_top M_RREADY", false,-1);
        tracep->declBit(c+5,"axi4_lite_top S_AWREADY", false,-1);
        tracep->declBit(c+6,"axi4_lite_top S_BVALID", false,-1);
        tracep->declBit(c+7,"axi4_lite_top M_AWVALID", false,-1);
        tracep->declBit(c+8,"axi4_lite_top M_BREADY", false,-1);
        tracep->declBit(c+7,"axi4_lite_top M_WVALID", false,-1);
        tracep->declBit(c+5,"axi4_lite_top S_WREADY", false,-1);
        tracep->declBus(c+61,"axi4_lite_top M_ARADDR", false,-1, 31,0);
        tracep->declBus(c+62,"axi4_lite_top M_AWADDR", false,-1, 31,0);
        tracep->declBus(c+63,"axi4_lite_top M_WDATA", false,-1, 31,0);
        tracep->declBus(c+9,"axi4_lite_top S_RDATA", false,-1, 31,0);
        tracep->declBus(c+10,"axi4_lite_top M_WSTRB", false,-1, 3,0);
        tracep->declBus(c+11,"axi4_lite_top S_RRESP", false,-1, 1,0);
        tracep->declBus(c+65,"axi4_lite_top S_BRESP", false,-1, 1,0);
        tracep->declBus(c+64,"axi4_lite_top u_axi4_lite_master0 ADDRESS", false,-1, 31,0);
        tracep->declBus(c+64,"axi4_lite_top u_axi4_lite_master0 DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+54,"axi4_lite_top u_axi4_lite_master0 ACLK", false,-1);
        tracep->declBit(c+55,"axi4_lite_top u_axi4_lite_master0 ARESETN", false,-1);
        tracep->declBit(c+56,"axi4_lite_top u_axi4_lite_master0 START_READ", false,-1);
        tracep->declBit(c+57,"axi4_lite_top u_axi4_lite_master0 START_WRITE", false,-1);
        tracep->declBus(c+58,"axi4_lite_top u_axi4_lite_master0 address", false,-1, 31,0);
        tracep->declBus(c+59,"axi4_lite_top u_axi4_lite_master0 W_data", false,-1, 31,0);
        tracep->declBit(c+1,"axi4_lite_top u_axi4_lite_master0 M_ARREADY", false,-1);
        tracep->declBus(c+9,"axi4_lite_top u_axi4_lite_master0 M_RDATA", false,-1, 31,0);
        tracep->declBus(c+11,"axi4_lite_top u_axi4_lite_master0 M_RRESP", false,-1, 1,0);
        tracep->declBit(c+2,"axi4_lite_top u_axi4_lite_master0 M_RVALID", false,-1);
        tracep->declBit(c+5,"axi4_lite_top u_axi4_lite_master0 M_AWREADY", false,-1);
        tracep->declBit(c+5,"axi4_lite_top u_axi4_lite_master0 M_WREADY", false,-1);
        tracep->declBus(c+65,"axi4_lite_top u_axi4_lite_master0 M_BRESP", false,-1, 1,0);
        tracep->declBit(c+6,"axi4_lite_top u_axi4_lite_master0 M_BVALID", false,-1);
        tracep->declBus(c+61,"axi4_lite_top u_axi4_lite_master0 M_ARADDR", false,-1, 31,0);
        tracep->declBit(c+3,"axi4_lite_top u_axi4_lite_master0 M_ARVALID", false,-1);
        tracep->declBit(c+4,"axi4_lite_top u_axi4_lite_master0 M_RREADY", false,-1);
        tracep->declBus(c+62,"axi4_lite_top u_axi4_lite_master0 M_AWADDR", false,-1, 31,0);
        tracep->declBit(c+7,"axi4_lite_top u_axi4_lite_master0 M_AWVALID", false,-1);
        tracep->declBus(c+63,"axi4_lite_top u_axi4_lite_master0 M_WDATA", false,-1, 31,0);
        tracep->declBus(c+10,"axi4_lite_top u_axi4_lite_master0 M_WSTRB", false,-1, 3,0);
        tracep->declBit(c+7,"axi4_lite_top u_axi4_lite_master0 M_WVALID", false,-1);
        tracep->declBit(c+8,"axi4_lite_top u_axi4_lite_master0 M_BREADY", false,-1);
        tracep->declBit(c+12,"axi4_lite_top u_axi4_lite_master0 read_start", false,-1);
        tracep->declBit(c+13,"axi4_lite_top u_axi4_lite_master0 write_addr", false,-1);
        tracep->declBit(c+13,"axi4_lite_top u_axi4_lite_master0 write_data", false,-1);
        tracep->declBit(c+14,"axi4_lite_top u_axi4_lite_master0 write_start", false,-1);
        tracep->declBus(c+15,"axi4_lite_top u_axi4_lite_master0 state", false,-1, 2,0);
        tracep->declBus(c+16,"axi4_lite_top u_axi4_lite_master0 next_state", false,-1, 2,0);
        tracep->declBus(c+64,"axi4_lite_top u_axi4_lite_slave0 ADDRESS", false,-1, 31,0);
        tracep->declBus(c+64,"axi4_lite_top u_axi4_lite_slave0 DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+54,"axi4_lite_top u_axi4_lite_slave0 ACLK", false,-1);
        tracep->declBit(c+55,"axi4_lite_top u_axi4_lite_slave0 ARESETN", false,-1);
        tracep->declBus(c+61,"axi4_lite_top u_axi4_lite_slave0 S_ARADDR", false,-1, 31,0);
        tracep->declBit(c+3,"axi4_lite_top u_axi4_lite_slave0 S_ARVALID", false,-1);
        tracep->declBit(c+4,"axi4_lite_top u_axi4_lite_slave0 S_RREADY", false,-1);
        tracep->declBus(c+62,"axi4_lite_top u_axi4_lite_slave0 S_AWADDR", false,-1, 31,0);
        tracep->declBit(c+7,"axi4_lite_top u_axi4_lite_slave0 S_AWVALID", false,-1);
        tracep->declBus(c+63,"axi4_lite_top u_axi4_lite_slave0 S_WDATA", false,-1, 31,0);
        tracep->declBus(c+10,"axi4_lite_top u_axi4_lite_slave0 S_WSTRB", false,-1, 3,0);
        tracep->declBit(c+7,"axi4_lite_top u_axi4_lite_slave0 S_WVALID", false,-1);
        tracep->declBit(c+8,"axi4_lite_top u_axi4_lite_slave0 S_BREADY", false,-1);
        tracep->declBit(c+1,"axi4_lite_top u_axi4_lite_slave0 S_ARREADY", false,-1);
        tracep->declBus(c+9,"axi4_lite_top u_axi4_lite_slave0 S_RDATA", false,-1, 31,0);
        tracep->declBus(c+11,"axi4_lite_top u_axi4_lite_slave0 S_RRESP", false,-1, 1,0);
        tracep->declBit(c+2,"axi4_lite_top u_axi4_lite_slave0 S_RVALID", false,-1);
        tracep->declBit(c+5,"axi4_lite_top u_axi4_lite_slave0 S_AWREADY", false,-1);
        tracep->declBit(c+5,"axi4_lite_top u_axi4_lite_slave0 S_WREADY", false,-1);
        tracep->declBus(c+65,"axi4_lite_top u_axi4_lite_slave0 S_BRESP", false,-1, 1,0);
        tracep->declBit(c+6,"axi4_lite_top u_axi4_lite_slave0 S_BVALID", false,-1);
        tracep->declBus(c+64,"axi4_lite_top u_axi4_lite_slave0 no_of_registers", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+17+i*1,"axi4_lite_top u_axi4_lite_slave0 register", true,(i+0), 31,0);}}
        tracep->declBus(c+49,"axi4_lite_top u_axi4_lite_slave0 addr", false,-1, 31,0);
        tracep->declBit(c+13,"axi4_lite_top u_axi4_lite_slave0 write_addr", false,-1);
        tracep->declBit(c+50,"axi4_lite_top u_axi4_lite_slave0 write_data", false,-1);
        tracep->declBus(c+51,"axi4_lite_top u_axi4_lite_slave0 state", false,-1, 2,0);
        tracep->declBus(c+52,"axi4_lite_top u_axi4_lite_slave0 next_state", false,-1, 2,0);
        tracep->declBus(c+53,"axi4_lite_top u_axi4_lite_slave0 i", false,-1, 31,0);
    }
}

void Vaxi4_lite_top::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vaxi4_lite_top::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vaxi4_lite_top__Syms* __restrict vlSymsp = static_cast<Vaxi4_lite_top__Syms*>(userp);
    Vaxi4_lite_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vaxi4_lite_top::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vaxi4_lite_top__Syms* __restrict vlSymsp = static_cast<Vaxi4_lite_top__Syms*>(userp);
    Vaxi4_lite_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(((3U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))
                                  ? 1U : 0U)));
        tracep->fullBit(oldp+2,(((4U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))
                                  ? 1U : 0U)));
        tracep->fullBit(oldp+3,(((3U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))
                                  ? 1U : 0U)));
        tracep->fullBit(oldp+4,(vlTOPp->axi4_lite_top__DOT__M_RREADY));
        tracep->fullBit(oldp+5,(((1U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))
                                  ? 1U : 0U)));
        tracep->fullBit(oldp+6,(((2U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))
                                  ? 1U : 0U)));
        tracep->fullBit(oldp+7,(((1U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))
                                  ? 1U : 0U)));
        tracep->fullBit(oldp+8,(vlTOPp->axi4_lite_top__DOT__M_BREADY));
        tracep->fullIData(oldp+9,(((4U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))
                                    ? vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register
                                   [(0x1fU & vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__addr)]
                                    : 0U)),32);
        tracep->fullCData(oldp+10,(((1U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))
                                     ? 0xfU : 0U)),4);
        tracep->fullCData(oldp+11,(0U),2);
        tracep->fullBit(oldp+12,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__read_start));
        tracep->fullBit(oldp+13,((1U & (((1U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))
                                          ? 1U : 0U) 
                                        & ((1U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))
                                            ? 1U : 0U)))));
        tracep->fullBit(oldp+14,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__write_start));
        tracep->fullCData(oldp+15,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state),3);
        tracep->fullCData(oldp+16,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__next_state),3);
        tracep->fullIData(oldp+17,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0]),32);
        tracep->fullIData(oldp+18,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[1]),32);
        tracep->fullIData(oldp+19,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[2]),32);
        tracep->fullIData(oldp+20,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[3]),32);
        tracep->fullIData(oldp+21,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[4]),32);
        tracep->fullIData(oldp+22,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[5]),32);
        tracep->fullIData(oldp+23,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[6]),32);
        tracep->fullIData(oldp+24,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[7]),32);
        tracep->fullIData(oldp+25,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[8]),32);
        tracep->fullIData(oldp+26,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[9]),32);
        tracep->fullIData(oldp+27,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[10]),32);
        tracep->fullIData(oldp+28,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[11]),32);
        tracep->fullIData(oldp+29,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[12]),32);
        tracep->fullIData(oldp+30,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[13]),32);
        tracep->fullIData(oldp+31,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[14]),32);
        tracep->fullIData(oldp+32,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[15]),32);
        tracep->fullIData(oldp+33,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[16]),32);
        tracep->fullIData(oldp+34,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[17]),32);
        tracep->fullIData(oldp+35,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[18]),32);
        tracep->fullIData(oldp+36,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[19]),32);
        tracep->fullIData(oldp+37,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[20]),32);
        tracep->fullIData(oldp+38,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[21]),32);
        tracep->fullIData(oldp+39,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[22]),32);
        tracep->fullIData(oldp+40,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[23]),32);
        tracep->fullIData(oldp+41,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[24]),32);
        tracep->fullIData(oldp+42,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[25]),32);
        tracep->fullIData(oldp+43,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[26]),32);
        tracep->fullIData(oldp+44,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[27]),32);
        tracep->fullIData(oldp+45,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[28]),32);
        tracep->fullIData(oldp+46,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[29]),32);
        tracep->fullIData(oldp+47,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[30]),32);
        tracep->fullIData(oldp+48,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[31]),32);
        tracep->fullIData(oldp+49,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__addr),32);
        tracep->fullBit(oldp+50,((1U & (((1U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))
                                          ? 1U : 0U) 
                                        & ((1U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))
                                            ? 1U : 0U)))));
        tracep->fullCData(oldp+51,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state),3);
        tracep->fullCData(oldp+52,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__next_state),3);
        tracep->fullIData(oldp+53,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__i),32);
        tracep->fullBit(oldp+54,(vlTOPp->ACLK));
        tracep->fullBit(oldp+55,(vlTOPp->ARESETN));
        tracep->fullBit(oldp+56,(vlTOPp->read_s));
        tracep->fullBit(oldp+57,(vlTOPp->write_s));
        tracep->fullIData(oldp+58,(vlTOPp->address),32);
        tracep->fullIData(oldp+59,(vlTOPp->W_data),32);
        tracep->fullIData(oldp+60,(vlTOPp->R_data),32);
        tracep->fullIData(oldp+61,(((3U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))
                                     ? vlTOPp->address
                                     : 0U)),32);
        tracep->fullIData(oldp+62,(((1U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))
                                     ? vlTOPp->address
                                     : 0U)),32);
        tracep->fullIData(oldp+63,(((1U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))
                                     ? vlTOPp->W_data
                                     : 0U)),32);
        tracep->fullIData(oldp+64,(0x20U),32);
        tracep->fullCData(oldp+65,(0U),2);
    }
}
