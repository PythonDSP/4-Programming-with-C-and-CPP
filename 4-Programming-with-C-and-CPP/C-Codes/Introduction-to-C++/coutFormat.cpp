//coutFormat.cpp

#include <iostream>
#include <iomanip>  // setw
using namespace std; 

int main(void){
    
    int x=150, y=12;
    float a=1.230, b=1.200;

    cout << " --- Right justified --- \n";
    cout << setw(10) << right << x << endl;  
    cout << right << setw(10) << y << endl;
    cout << setw(10) << a << endl;
    cout << setw(10) << b << endl;

    cout << "\n --- Left justified --- \n";
    cout << left << setw(10) << x << endl;
    cout << left << setw(10) << y << endl;
    cout << setw(10) << left << a << endl;
    cout << left << setw(10) << b << endl;
    
    // for floating point numbers
    cout << "\n --- 'showpoint for trainling zeros ' --- \n";
    cout << setw(10) << showpoint << a << endl;
    cout << setw(10) << showpoint << b << endl;

    return 0; 
}

/*
 --- Right justified ---
       150
        12
      1.23
       1.2

 --- Left justified ---
150
12
1.23
1.2

 --- 'showpoint for trainling zeros' ---
1.23000
1.20000
 */