#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vsparrow.h"
#include "Vsparrow___024unit.h"

#define MAX_SIM_TIME 100
vluint64_t sim_time = 0;
vluint64_t posedge_cnt = 0;

void dut_reset (Vsparrow* dut, vluint64_t &sim_time) {
    dut->rstn = 1;
    if (sim_time > 3 && sim_time < 8) {
        dut->rstn = 0;
    }
}

int main (int argc, char** argv, char** env) {
    //Vsparrow* dut = new Vsparrow{contextp};
    Verilated::commandArgs(argc, argv);
    Vsparrow* dut = new Vsparrow;

    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");

    /*
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    */
    while (sim_time < MAX_SIM_TIME) { 
        dut->rstn = 1;
        dut->holdn = 1;
        dut_reset(dut, sim_time);

        dut->clk ^= 1;              // Invert clock
        dut->eval();                // Evaluate dut on the current edge
        if(dut->clk == 1) {
            posedge_cnt++;          // Increment posedge counter
            switch (posedge_cnt) {
                case 10:
                    dut->holdn = 1;
                    dut->ra0 = 0b00000011;
                    dut->ra1 = 0b00000001;
                    dut->ra2 = 0;
                    dut->ra3 = 0;
                    dut->rb0 = 0b00000011;
                    dut->rb1 = 0b00000001;
                    dut->rb2 = 0;
                    dut->rb3 = 0;
                    dut->op1 = 1;
                    dut->op2 = 4;
                    dut->rc_we = 1;
                    dut->bpv= 0;
                    dut->bp= 0;
                    //break;
                case 11:
                case 12:
                case 13:
                case 18:
                    printf("Time is %llu and there have been %llu positive edges\n", sim_time, posedge_cnt);
                    printf("We have ra3=%x, ra2=%x, ra1=%x and ra0=%x\n", dut->ra3, dut->ra2, dut->ra1, dut->ra0);
                    printf("We have rb3=%x, rb2=%x, rb1=%x and rb0=%x\n", dut->rb3, dut->rb2, dut->rb1, dut->rb0);
                    printf("We have op1=%d, op2=%d, rc_we=%d\n", dut->op1, dut->op2, dut->rc_we);
                    printf("The output is %x %x\n", dut->result1, dut->result0);
                    break;
                case 20:
                    break;
                default:
                    break;
            }
        }
        m_trace->dump(sim_time);    // Dump to waveform.vcd
        sim_time++;                 // Advance simulation time
    }

    m_trace->close();
    delete dut;
    //delete contextp;
    exit(EXIT_SUCCESS);
}
