// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxi4_lite_top.h for the primary calling header

#include "Vaxi4_lite_top.h"
#include "Vaxi4_lite_top__Syms.h"

//==========

void Vaxi4_lite_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vaxi4_lite_top::eval\n"); );
    Vaxi4_lite_top__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vaxi4_lite_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("axi4_lite_top.sv", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vaxi4_lite_top::_eval_initial_loop(Vaxi4_lite_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("axi4_lite_top.sv", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vaxi4_lite_top::_sequent__TOP__1(Vaxi4_lite_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi4_lite_top::_sequent__TOP__1\n"); );
    Vaxi4_lite_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdlyvdim0__axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register__v0;
    CData/*0:0*/ __Vdlyvset__axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register__v0;
    CData/*0:0*/ __Vdlyvset__axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register__v1;
    IData/*31:0*/ __Vdlyvval__axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register__v0;
    // Body
    __Vdlyvset__axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register__v0 = 0U;
    __Vdlyvset__axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register__v1 = 0U;
    if ((1U & (~ (IData)(vlTOPp->ARESETN)))) {
        vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__i = 0x20U;
    }
    vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__write_start 
        = ((IData)(vlTOPp->ARESETN) & (IData)(vlTOPp->write_s));
    vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__read_start 
        = ((IData)(vlTOPp->ARESETN) & (IData)(vlTOPp->read_s));
    if (vlTOPp->ARESETN) {
        if ((1U != (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))) {
            if ((3U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))) {
                vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__addr 
                    = ((3U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))
                        ? vlTOPp->address : 0U);
            }
        }
    }
    if (vlTOPp->ARESETN) {
        if ((1U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))) {
            __Vdlyvval__axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register__v0 
                = ((1U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))
                    ? vlTOPp->W_data : 0U);
            __Vdlyvset__axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register__v0 = 1U;
            __Vdlyvdim0__axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register__v0 
                = ((1U == (IData)(vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))
                    ? (0x1fU & vlTOPp->address) : 0U);
        }
    } else {
        __Vdlyvset__axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register__v1 = 1U;
    }
    if (__Vdlyvset__axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register__v0) {
        vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[__Vdlyvdim0__axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register__v0] 
            = __Vdlyvval__axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register__v0;
    }
    if (__Vdlyvset__axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register__v1) {
        vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0U] = 0U;
        vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[1U] = 0U;
        vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[2U] = 0U;
        vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[3U] = 0U;
        vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[4U] = 0U;
        vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[5U] = 0U;
        vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[6U] = 0U;
        vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[7U] = 0U;
        vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[8U] = 0U;
        vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[9U] = 0U;
        vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0xaU] = 0U;
        vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0xbU] = 0U;
        vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0xcU] = 0U;
        vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0xdU] = 0U;
        vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0xeU] = 0U;
        vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0xfU] = 0U;
        vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0x10U] = 0U;
        vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0x11U] = 0U;
        vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0x12U] = 0U;
        vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0x13U] = 0U;
        vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0x14U] = 0U;
        vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0x15U] = 0U;
        vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0x16U] = 0U;
        vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0x17U] = 0U;
        vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0x18U] = 0U;
        vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0x19U] = 0U;
        vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0x1aU] = 0U;
        vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0x1bU] = 0U;
        vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0x1cU] = 0U;
        vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0x1dU] = 0U;
        vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0x1eU] = 0U;
        vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0x1fU] = 0U;
    }
    if (vlTOPp->ARESETN) {
        vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state 
            = vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__next_state;
        vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state 
            = vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__next_state;
    } else {
        vlTOPp->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state = 0U;
        vlTOPp->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state = 0U;
    }
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

void Vaxi4_lite_top::_eval(Vaxi4_lite_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi4_lite_top::_eval\n"); );
    Vaxi4_lite_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->ACLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__ACLK)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__ACLK = vlTOPp->ACLK;
}

VL_INLINE_OPT QData Vaxi4_lite_top::_change_request(Vaxi4_lite_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi4_lite_top::_change_request\n"); );
    Vaxi4_lite_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vaxi4_lite_top::_change_request_1(Vaxi4_lite_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi4_lite_top::_change_request_1\n"); );
    Vaxi4_lite_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vaxi4_lite_top::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi4_lite_top::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((ACLK & 0xfeU))) {
        Verilated::overWidthError("ACLK");}
    if (VL_UNLIKELY((ARESETN & 0xfeU))) {
        Verilated::overWidthError("ARESETN");}
    if (VL_UNLIKELY((read_s & 0xfeU))) {
        Verilated::overWidthError("read_s");}
    if (VL_UNLIKELY((write_s & 0xfeU))) {
        Verilated::overWidthError("write_s");}
}
#endif  // VL_DEBUG
