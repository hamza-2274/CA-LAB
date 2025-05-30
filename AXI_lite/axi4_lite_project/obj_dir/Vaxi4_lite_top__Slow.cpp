// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxi4_lite_top.h for the primary calling header

#include "Vaxi4_lite_top.h"
#include "Vaxi4_lite_top__Syms.h"

//==========

VL_CTOR_IMP(Vaxi4_lite_top) {
    Vaxi4_lite_top__Syms* __restrict vlSymsp = __VlSymsp = new Vaxi4_lite_top__Syms(this, name());
    Vaxi4_lite_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vaxi4_lite_top::__Vconfigure(Vaxi4_lite_top__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vaxi4_lite_top::~Vaxi4_lite_top() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vaxi4_lite_top::_settle__TOP__2(Vaxi4_lite_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi4_lite_top::_settle__TOP__2\n"); );
    Vaxi4_lite_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->R_data = ((4U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))
                       ? vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register
                      [(0x1fU & vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__addr)]
                       : 0U);
    vlTOPp->axi4_lite_top__DOT__M_RREADY = (((4U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state)) 
                                             | (3U 
                                                == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state)))
                                             ? 1U : 0U);
    vlTOPp->axi4_lite_top__DOT__M_BREADY = (((1U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state)) 
                                             | (2U 
                                                == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state)))
                                             ? 1U : 0U);
    if ((4U & (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))) {
        if ((2U & (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))) {
            vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__next_state = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))) {
                vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__next_state = 0U;
            } else {
                if ((((4U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))
                       ? 1U : 0U) & (IData)(vlTOPp->axi4_lite_top__DOT__M_RREADY))) {
                    vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__next_state = 0U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))) {
            if ((1U & (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))) {
                if ((1U & (((3U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))
                             ? 1U : 0U) & ((3U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))
                                            ? 1U : 0U)))) {
                    vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__next_state = 4U;
                }
            } else {
                if ((((2U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))
                       ? 1U : 0U) & (IData)(vlTOPp->axi4_lite_top__DOT__M_BREADY))) {
                    vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__next_state = 0U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))) {
                if ((1U & ((((1U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))
                              ? 1U : 0U) & ((1U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))
                                             ? 1U : 0U)) 
                           & (((1U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))
                                ? 1U : 0U) & ((1U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))
                                               ? 1U
                                               : 0U))))) {
                    vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__next_state = 2U;
                }
            } else {
                vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__next_state 
                    = (((1U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))
                         ? 1U : 0U) ? 1U : (((3U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))
                                              ? 1U : 0U)
                                             ? 3U : 0U));
            }
        }
    }
    if ((4U & (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))) {
        if ((2U & (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))) {
            vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__next_state = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))) {
                vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__next_state = 0U;
            } else {
                if ((((4U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))
                       ? 1U : 0U) & (IData)(vlTOPp->axi4_lite_top__DOT__M_RREADY))) {
                    vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__next_state = 0U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))) {
            if ((1U & (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))) {
                if ((1U & (((3U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))
                             ? 1U : 0U) & ((3U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))
                                            ? 1U : 0U)))) {
                    vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__next_state = 4U;
                }
            } else {
                if ((((2U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))
                       ? 1U : 0U) & (IData)(vlTOPp->axi4_lite_top__DOT__M_BREADY))) {
                    vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__next_state = 0U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))) {
                if ((1U & ((((1U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))
                              ? 1U : 0U) & ((1U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))
                                             ? 1U : 0U)) 
                           & (((1U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))
                                ? 1U : 0U) & ((1U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))
                                               ? 1U
                                               : 0U))))) {
                    vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__next_state = 2U;
                }
            } else {
                vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__next_state 
                    = ((IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__write_start)
                        ? 1U : ((IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__read_start)
                                 ? 3U : 0U));
            }
        }
    }
}

void Vaxi4_lite_top::_eval_initial(Vaxi4_lite_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi4_lite_top::_eval_initial\n"); );
    Vaxi4_lite_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__ACLK = vlTOPp->ACLK;
}

void Vaxi4_lite_top::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi4_lite_top::final\n"); );
    // Variables
    Vaxi4_lite_top__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vaxi4_lite_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vaxi4_lite_top::_eval_settle(Vaxi4_lite_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi4_lite_top::_eval_settle\n"); );
    Vaxi4_lite_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vaxi4_lite_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi4_lite_top::_ctor_var_reset\n"); );
    // Body
    ACLK = VL_RAND_RESET_I(1);
    ARESETN = VL_RAND_RESET_I(1);
    read_s = VL_RAND_RESET_I(1);
    write_s = VL_RAND_RESET_I(1);
    address = VL_RAND_RESET_I(32);
    W_data = VL_RAND_RESET_I(32);
    R_data = VL_RAND_RESET_I(32);
    axi4_lite_top__DOT__M_RREADY = VL_RAND_RESET_I(1);
    axi4_lite_top__DOT__M_BREADY = VL_RAND_RESET_I(1);
    axi4_lite_top__DOT__u_axi4_lite_master0__DOT__read_start = VL_RAND_RESET_I(1);
    axi4_lite_top__DOT__u_axi4_lite_master0__DOT__write_start = VL_RAND_RESET_I(1);
    axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state = VL_RAND_RESET_I(3);
    axi4_lite_top__DOT__u_axi4_lite_master0__DOT__next_state = VL_RAND_RESET_I(3);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[__Vi0] = VL_RAND_RESET_I(32);
    }}
    axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__addr = VL_RAND_RESET_I(32);
    axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state = VL_RAND_RESET_I(3);
    axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__next_state = VL_RAND_RESET_I(3);
    axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__i = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
