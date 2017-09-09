// classObject1.cpp

#include <iostream>
using namespace std;

class Jungle{
public:  // to allow access to function 'welcomeMessage' outside the class
    
    // welcome message
    void welcomeMessage(){
        cout << "Welcome to Jungle";
    }
};

int main(){
    Jungle j;   // 'j' is object of class 'Jungle'
    j.welcomeMessage();  // accessing class-function

    return 0;
}

/* Outputs
Welcome to Jungle
*/