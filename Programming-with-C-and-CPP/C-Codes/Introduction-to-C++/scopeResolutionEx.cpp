// scopeResolutionEx.cpp

#include <iostream>
using namespace std; 

int a=20;  // global variable

int main(){

    int a = 4; 
    
    cout << "Local Variable :  " << a << endl;
    
    // use scope-resolution-operator (::) to access global variable
    cout << "Glabal Variable :  " << ::a;

    return 0;
}

/* Output
Local Variable :  4
Glabal Variable :  20
*/