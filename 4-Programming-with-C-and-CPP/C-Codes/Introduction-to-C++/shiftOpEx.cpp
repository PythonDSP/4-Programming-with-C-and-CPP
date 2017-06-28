// shiftOpEx.cpp

#include <iostream>
using namespace std; 

int main(){
    int a = 0x2;  // 0010

    int b, c;
    int xor_op, not_op_bad, not_op_good;

    // shift right by one bit and save to b
    b = a >> 1;  // 0001 = 1
    c = a << 2;  // 1000 = 8

    cout << "a = "<< hex << a << ", b = " << hex << b << ", c = " << hex << c << endl;

    xor_op = a ^ b; // 0011 = 3

    cout << "xor_op = " << hex << xor_op << endl;

    not_op_bad = ~a; // fffffffd (expected output = 1101 = 13 = 'd')
    cout << "not_op_bad = " << hex << not_op_bad << endl;
    
    // suppress all 'f' (i.e. make them 0) by 'and-operation' of 'a' with '0000000f' = 15
    not_op_good = ~a & 0xf; // or not_op_good = ~a & 15;
    cout << "not_op_good = " << hex << not_op_good << endl;
}

/* Outputs
a = 2, b = 1, c = 8
xor_op = 3
not_op_bad = fffffffd
not_op_good = d
*/