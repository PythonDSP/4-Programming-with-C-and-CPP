//floatFormat.cpp

#include <iostream>
#include <iomanip>  // setw
using namespace std; 

int main(void){

    float a=123.32435895;

    cout << a << endl;  // 123.324

    cout << scientific << a << endl;  // 1.233244e+002
    cout << fixed << a << endl << endl; // 123.324356     

    // 1.23324e+002
    cout << setprecision(5) << scientific << a << " <-- setprecision(5) " << endl;  
    // 123.32436
    cout << fixed << a << "  <-- automatically using above precision" << endl;  
    cout << setprecision(6) << fixed << a << endl;  // 123.324356

    return 0; 
}

/*
123.324
1.233244e+002
123.324356

1.23324e+002 <-- setprecision(5)
123.32436  <-- automatically using above precision
123.324356
 */