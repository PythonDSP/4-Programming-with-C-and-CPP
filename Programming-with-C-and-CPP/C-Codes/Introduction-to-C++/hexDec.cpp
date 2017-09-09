//hecDec.cpp

#include <iostream>
#include <iomanip> // required for std::setbase
#include <bitset> // required for bitset<>(for binary conversion)
using namespace std; // std::hex, std::oct, std::dec

int main(void){
    
    int x = 15;

    // hexadecimal number starts with 0x
    // h is defined as hex 0xb = 13(oct) = 11(dec)
    int h = 0xb;  // be careful while printing it (see Line 53 and 57)

    // octal number, starts with 0
    int o = 013; // be careful while printing it as well (see Line 53 and 57)

    cout << " x = " << x << endl << endl;
    cout << " hex value of x = " << hex << x << endl; // hex
    cout << " oct value of x = " << oct << x << endl; // octal
    cout << " decimal value of x = " << dec << x << endl << endl; // decimal
    cout << " binary value of x = " << bitset<8>(x) << endl << endl; // binary

    cout << " hex value of x (using setbase) = " << setbase(16) << x << endl; 
    cout << " oct value of x (using setbase) = " << setbase(8) << x << endl << endl; 

    cout << " h = " << h << endl;  // by default print as oct.
    cout << " hex value of h = " << hex << h << endl;
    cout << " oct value of h = " << oct << h << endl;
    cout << " decimal value of h = " << dec << h << endl;
    cout << " h = " << h << endl << endl;  // now, by default print as decimal.

    cout << " oct value of o = " << oct << o << endl;
    cout << " hex value of o = " << hex << o << endl;
    cout << " decimal value of o = " << dec << o << endl;

    return 0; 
}

/*
 x = 15

 hex value of x = f
 oct value of x = 17
 decimal value of x = 15

 binary value of x = 00001111

 hex value of x (using setbase) = f
 oct value of x (using setbase) = 17

 h = 13
 hex value of h = b
 oct value of h = 13
 decimal value of h = 11
 h = 11

 oct value of o = 13
 hex value of o = b
 decimal value of o = 11
 */