// shiftOpEx.c

#include <stdio.h>

int main(){
    int a = 0x2;  // 0010

    int b, c;
    int xor_op, not_op_bad, not_op_good;

    // shift right by one bit and save to b
    b = a >> 1;  // 0001 = 1
    c = a << 2;  // 1000 = 8

    printf("a = %x, b = %x, c = %x\n", a, b, c);

    xor_op = a ^ b; // 0011 = 3
    printf("xor_op = %x\n", xor_op);

    not_op_bad = ~a; // fffffffd (expected output = 1101 = 13 = 'd')
    printf("not_op_bad = %x\n", not_op_bad);
    
    // suppress all 'f' (i.e. make them 0) by 'and-operation' of 'a' with '0000000f' = 15
    not_op_good = ~a & 0xf; // or not_op_good = ~a & 15;
    printf("not_op_good = %x\n", not_op_good);
}

/* Outputs
a = 2, b = 1, c = 8
xor_op = 3
not_op_bad = fffffffd
not_op_good = d
*/