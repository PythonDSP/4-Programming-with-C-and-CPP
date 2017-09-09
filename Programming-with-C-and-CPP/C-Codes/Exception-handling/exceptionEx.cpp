// exceptionEx.cpp

#include <iostream>
using namespace std;

float division(float, float);

float division(float a, float b){
    if (b == 0){
        // if denominator is zero, then throw the error
        throw "Divide by zero error";  // exception of type 'const char *'
    }

    return a/b;
}

int main(){
    float a, b, c;
    cout << "enter the value of a and b : ";
    cin >> a >> b;

    try{  // try division
        c = division(a, b); // if successful
        cout << "division of numbers = " << c << endl;   // then print result
    }
    catch(const char *msg){ // catch exception of 'const char *'
        // else print the result received from 'throw' statement
        cout << msg << endl;
    }

    cout << "product of numbers = " << a*b;
    return 0;
}