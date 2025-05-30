// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vaxi4_lite_top__Syms.h"


void Vaxi4_lite_top::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vaxi4_lite_top__Syms* __restrict vlSymsp = static_cast<Vaxi4_lite_top__Syms*>(userp);
    Vaxi4_lite_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vaxi4_lite_top::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vaxi4_lite_top__Syms* __restrict vlSymsp = static_cast<Vaxi4_lite_top__Syms*>(userp);
    Vaxi4_lite_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(((3U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))
                                     ? 1U : 0U)));
            tracep->chgBit(oldp+1,(((4U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))
                                     ? 1U : 0U)));
            tracep->chgBit(oldp+2,(((3U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))
                                     ? 1U : 0U)));
            tracep->chgBit(oldp+3,(vlTOPp->axi4_lite_top__DOT__M_RREADY));
            tracep->chgBit(oldp+4,(((1U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))
                                     ? 1U : 0U)));
            tracep->chgBit(oldp+5,(((2U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))
                                     ? 1U : 0U)));
            tracep->chgBit(oldp+6,(((1U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))
                                     ? 1U : 0U)));
            tracep->chgBit(oldp+7,(vlTOPp->axi4_lite_top__DOT__M_BREADY));
            tracep->chgIData(oldp+8,(((4U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))
                                       ? vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register
                                      [(0x1fU & vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__addr)]
                                       : 0U)),32);
            tracep->chgCData(oldp+9,(((1U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))
                                       ? 0xfU : 0U)),4);
            tracep->chgCData(oldp+10,(0U),2);
            tracep->chgBit(oldp+11,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__read_start));
            tracep->chgBit(oldp+12,((1U & (((1U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))
                                             ? 1U : 0U) 
                                           & ((1U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))
                                               ? 1U
                                               : 0U)))));
            tracep->chgBit(oldp+13,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__write_start));
            tracep->chgCData(oldp+14,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state),3);
            tracep->chgCData(oldp+15,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__next_state),3);
            tracep->chgIData(oldp+16,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0]),32);
            tracep->chgIData(oldp+17,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[1]),32);
            tracep->chgIData(oldp+18,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[2]),32);
            tracep->chgIData(oldp+19,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[3]),32);
            tracep->chgIData(oldp+20,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[4]),32);
            tracep->chgIData(oldp+21,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[5]),32);
            tracep->chgIData(oldp+22,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[6]),32);
            tracep->chgIData(oldp+23,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[7]),32);
            tracep->chgIData(oldp+24,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[8]),32);
            tracep->chgIData(oldp+25,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[9]),32);
            tracep->chgIData(oldp+26,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[10]),32);
            tracep->chgIData(oldp+27,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[11]),32);
            tracep->chgIData(oldp+28,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[12]),32);
            tracep->chgIData(oldp+29,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[13]),32);
            tracep->chgIData(oldp+30,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[14]),32);
            tracep->chgIData(oldp+31,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[15]),32);
            tracep->chgIData(oldp+32,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[16]),32);
            tracep->chgIData(oldp+33,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[17]),32);
            tracep->chgIData(oldp+34,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[18]),32);
            tracep->chgIData(oldp+35,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[19]),32);
            tracep->chgIData(oldp+36,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[20]),32);
            tracep->chgIData(oldp+37,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[21]),32);
            tracep->chgIData(oldp+38,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[22]),32);
            tracep->chgIData(oldp+39,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[23]),32);
            tracep->chgIData(oldp+40,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[24]),32);
            tracep->chgIData(oldp+41,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[25]),32);
            tracep->chgIData(oldp+42,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[26]),32);
            tracep->chgIData(oldp+43,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[27]),32);
            tracep->chgIData(oldp+44,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[28]),32);
            tracep->chgIData(oldp+45,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[29]),32);
            tracep->chgIData(oldp+46,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[30]),32);
            tracep->chgIData(oldp+47,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[31]),32);
            tracep->chgIData(oldp+48,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__addr),32);
            tracep->chgBit(oldp+49,((1U & (((1U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))
                                             ? 1U : 0U) 
                                           & ((1U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))
                                               ? 1U
                                               : 0U)))));
            tracep->chgCData(oldp+50,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state),3);
            tracep->chgCData(oldp+51,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__next_state),3);
            tracep->chgIData(oldp+52,(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__i),32);
        }
        tracep->chgBit(oldp+53,(vlTOPp->ACLK));
        tracep->chgBit(oldp+54,(vlTOPp->ARESETN));
        tracep->chgBit(oldp+55,(vlTOPp->read_s));
        tracep->chgBit(oldp+56,(vlTOPp->write_s));
        tracep->chgIData(oldp+57,(vlTOPp->address),32);
        tracep->chgIData(oldp+58,(vlTOPp->W_data),32);
        tracep->chgIData(oldp+59,(vlTOPp->R_data),32);
        tracep->chgIData(oldp+60,(((3U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))
                                    ? vlTOPp->address
                                    : 0U)),32);
        tracep->chgIData(oldp+61,(((1U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))
                                    ? vlTOPp->address
                                    : 0U)),32);
        tracep->chgIData(oldp+62,(((1U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))
                                    ? vlTOPp->W_data
                                    : 0U)),32);
    }
}

void Vaxi4_lite_top::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vaxi4_lite_top__Syms* __restrict vlSymsp = static_cast<Vaxi4_lite_top__Syms*>(userp);
    Vaxi4_lite_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
