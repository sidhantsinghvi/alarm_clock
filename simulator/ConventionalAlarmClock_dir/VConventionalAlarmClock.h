// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VCONVENTIONALALARMCLOCK_H_
#define VERILATED_VCONVENTIONALALARMCLOCK_H_  // guard

#include "verilated.h"

class VConventionalAlarmClock__Syms;
class VConventionalAlarmClock___024root;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) VConventionalAlarmClock VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VConventionalAlarmClock__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&SETUP_TIME,0,0);
    VL_IN8(&CLK,0,0);
    VL_IN8(&SETUP_ALARM,0,0);
    VL_IN8(&ALARM_EN,0,0);
    VL_IN8(&CLR,0,0);
    VL_IN8(&HR_ADV,0,0);
    VL_IN8(&MIN_ADV,0,0);
    VL_OUT8(&MINUTES,5,0);
    VL_OUT8(&HOURS,4,0);
    VL_OUT8(&ALARM_MINUTES,5,0);
    VL_OUT8(&BUZZ,0,0);
    VL_OUT8(&ALARM_HOURS,4,0);
    VL_OUT8(&SECONDS,5,0);
    VL_OUT16(&SEG_SECONDS,13,0);
    VL_OUT16(&SEG_MINUTES,13,0);
    VL_OUT16(&SEG_HOURS,13,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VConventionalAlarmClock___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VConventionalAlarmClock(VerilatedContext* contextp, const char* name = "TOP");
    explicit VConventionalAlarmClock(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VConventionalAlarmClock();
  private:
    VL_UNCOPYABLE(VConventionalAlarmClock);  ///< Copying not allowed

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
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
