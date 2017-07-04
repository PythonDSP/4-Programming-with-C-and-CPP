// typeChecking2.cpp

#include <iostream>
using namespace std; 

int main(){
    float a;  // a must be integer only
    cin >> a;
    cout << a;
    // cin.fail() : fail if type is not correct
    // static_cast<int>(a) != a : check if a is integer or not
    if (cin.fail() || (static_cast<int>(a) != a) ){
        cout << "Wrong input. Please enter one integer\n";
        std::cin.clear();
        std::cin.ignore(256,'\n');   // ignore the line change
        std::cin >> a;
    }
    return 0;
}

