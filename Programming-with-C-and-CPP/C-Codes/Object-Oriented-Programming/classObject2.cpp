// classObject2.cpp

#include <iostream>
using namespace std;

class Jungle{
public:  // to allow access to function 'welcomeMessage' outside the class
    
    // welcome message
    void welcomeMessage(string name){
        cout << "Welcome to Jungle " << name;
    }
};

int main(){
    string name;

    cout << "Enter your name : ";
    getline(cin, name);  // read name with spaces

    Jungle j;   // 'j' is object of class 'Jungle'
    j.welcomeMessage(name);  // accessing class-function

    return 0;
}

/* Outputs
Enter your name : Meher Krishna
Welcome to Jungle Meher Krishna
*/