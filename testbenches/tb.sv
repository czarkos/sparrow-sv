import sparrow::*;

module sparrow_tb;
    lpmul_in_type muli;
    lpmul_out_type mulo;

    vector_component a, tmp_a;
    vector_component b;
    high_prec_component pout;


    lpmul mymul (
        .muli (muli),
        .mulo (mulo)
    );

    initial begin
        // muli.opA  = 8'b0000_0100;
        muli.opA  = 8'b0111_1111;
        muli.opB  = 8'b0111_1111;
        muli.sign = 1;
        muli.sat  = 1;

        mulo.mul_res = 16'b0000_0000_0000_0000;
    end

    assign a = muli.opA;
    assign b = muli.opB;
    assign pout = mulo.mul_res;

    always_comb begin
        $display("%d = %d = %b, %d = %d = %b", a, signed'(a), a, b, signed'(b), b);
        $display("The result of the product of a and b is");
        $display("%d = %d = %b", pout, signed'(pout), pout);
        $finish;
    end


endmodule
