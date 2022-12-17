import sparrow::*;

module wrapper(
    input logic clk,
    input logic rstn,
    input logic holdn,
    
    // sdi
    input logic[7:0] ra0,
    input logic[7:0] ra1,
    input logic[7:0] ra2,
    input logic[7:0] ra3,
    input logic[7:0] rb0,
    input logic[7:0] rb1,
    input logic[7:0] rb2,
    input logic[7:0] rb3,
    input logic [4:0] op1,
    input logic [2:0] op2,
    input logic rc_we,
    input sprw_ctrl_reg_type ctrl,
    input word bpv,
    logic [1:0] bp,

    // sdo
    output logic[15:0] result0,
    output logic[15:0] result1,
    output word s1bp,
    output word s2bp
);

    sprw_in_type sdi;
    sprw_out_type sdo;

    always_comb begin
        sdi.ra    = {ra3, ra2, ra1, ra0};
        sdi.rb    = {rb3, rb2, rb1, rb0};
        sdi.op1   = op1;
        sdi.op2   = op2;
        sdi.rc_we = rc_we;

        sdi.ctrl.mk = 4'b0000;
        sdi.ctrl.ms      = 1'b0;
        //sdi.sa      = ;
        //sdi.sb      = ;
        sdi.ctrl.ol      = 2'b0;
        sdi.ctrl.od      = 4'b0;
        sdi.ctrl.hp      = 1'b0;
        
        sdi.bpv   = bpv;
        sdi.bp    = bp;

        result0 = sdo.result[15:0];
        result1 = sdo.result[31:16];
        s1bp   = sdo.s1bp;
        s2bp   = sdo.s2bp;
    end

    sprw_module jack (
        .clk(clk),
        .rstn(rstn),
        .holdn(holdn),
        .sdi(sdi),  
        .sdo(sdo)  
    );

endmodule
