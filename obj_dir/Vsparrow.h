// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VSPARROW_H_
#define VERILATED_VSPARROW_H_  // guard

#include "verilated.h"

class Vsparrow__Syms;
class Vsparrow___024root;
class VerilatedVcdC;
class Vsparrow_sparrow;


// This class is the main interface to the Verilated model
class Vsparrow VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vsparrow__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rstn,0,0);
    VL_IN8(&holdn,0,0);
    VL_IN8(&ra0,7,0);
    VL_IN8(&ra1,7,0);
    VL_IN8(&ra2,7,0);
    VL_IN8(&ra3,7,0);
    VL_IN8(&rb0,7,0);
    VL_IN8(&rb1,7,0);
    VL_IN8(&rb2,7,0);
    VL_IN8(&rb3,7,0);
    VL_IN8(&op1,4,0);
    VL_IN8(&op2,2,0);
    VL_IN8(&rc_we,0,0);
    VL_IN8(&bp,1,0);
    VL_OUT16(&result0,15,0);
    VL_OUT16(&result1,15,0);
    VL_IN(&bpv,31,0);
    VL_OUT(&s1bp,31,0);
    VL_OUT(&s2bp,31,0);
    VL_INW(&ctrl,267,0,9);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vsparrow_sparrow* const __PVT__sparrow;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vsparrow___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vsparrow(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vsparrow(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vsparrow();
  private:
    VL_UNCOPYABLE(Vsparrow);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
