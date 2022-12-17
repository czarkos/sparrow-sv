import sparrow::*;

module test;
    initial begin
        vector_component a = 8'b0000_1111;
        vector_component b = 8'b1000_0100;
        integer res1 = int'(signed'(a)) + int'(signed'(b));
        $display("%d = %d = %b, %d = %d = %b", a, signed'(a), a, b, signed'(b), b);
        $display("The result of the product of and b is");
        $display("%d = %b = %d", res1, res1[8:0], signed'(res1[7:0])); 
        $finish; 
    end
endmodule
