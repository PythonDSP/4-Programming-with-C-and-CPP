// typeChecking.cpp

#include <iostream>
using namespace std; 

int main(){
    int a;  
    cin >> a;
    // cin.fail() : fail if type is not correct
    if (cin.fail()){
        cout << "Wrong input. Please enter one integer\n";
        std::cin.clear();
        std::cin.ignore(256,'\n');   // ignore the line change
        std::cin >> a;
    }

    cout << "a = " << a; 
    return 0;
}