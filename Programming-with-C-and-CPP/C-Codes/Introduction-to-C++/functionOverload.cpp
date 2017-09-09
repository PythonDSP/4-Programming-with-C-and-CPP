// functionOverload.cpp

#include <iostream>
using namespace std; 

int add2Num(int, int);
float add2Num(int, float);
float add2Num(float, float);

// function 1
int add2Num(int a, int b){
    cout << "int + int = " ;
    return a+b;
}

// function 2
float add2Num(int a, float b){
    cout << "int + float = ";
    return a+b;
}

// function 3
float add2Num(float a, int b){
    cout << "float + int = ";
    return a+b;
}

// function 4
float add2Num(float a, float b){
    cout << "float + float = ";
    return a+b;
}


int main(){

    int w = 4;
    int x = 3;
    float y = 3.5;
    float z = 2.5; 
    
    // int + int
    cout << add2Num(w, x) << endl;  // function 1 will be called
    
    // int + float
    cout << add2Num(x, y) << endl;  // function 2 will be called
    
    // float + int
    cout << add2Num(y, x) << endl;  // function 3 will be called
    
    // float + float
    cout << add2Num(y, z) << endl;  // function 4 will be called
    
    return 0;
}

/* Output
int + int = 7
int + float = 6.5
float + int = 6.5
float + float = 6
*/