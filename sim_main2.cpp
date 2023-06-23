#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vsparrow.h"
#include "Vsparrow___024unit.h"

#define MAX_SIM_TIME 10000
vluint64_t sim_time = 0;

int main (int argc, char** argv, char** env) {
    // Parse command line arguments
    Verilated::commandArgs(argc, argv);

    // Instantiate the Verilated model
    Vsparrow* dut = new Vsparrow;

    // Enable and Initialize VCD trace
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    // Set trace level
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");

    while ((Verilated::gotFinish()) && (sim_time < MAX_SIM_TIME) ){ 
        dut->eval();                // Evaluate the model
        m_trace->dump(sim_time);    // Dump to waveform.vcd
        sim_time++;                 // Advance simulation time
    }

    // Close VCD trace
    m_trace->close();
    delete m_trace;
    // Cleanup
    dut->final();
    delete dut;
    dut = nullptr;

    exit(EXIT_SUCCESS);
}
