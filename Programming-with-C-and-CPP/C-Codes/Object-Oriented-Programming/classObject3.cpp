// classObject2.cpp

#include <iostream>
using namespace std;

class Jungle{
private: // not accessible outside the class
    string visitorName;

public:  // to allow access to function 'welcomeMessage' outside the class
    
    // setVisitorName is accessible outside the class, which will set the visitor name
    void setVisitorName(string name){
        visitorName = name;
    }

    // function to retrieve the visitorName as it is not accessible directly
    string getVisitorName(){
        return visitorName;
    }

    // welcome message
    void welcomeMessage(){
        cout << "Welcome to Jungle " << getVisitorName();
    }
};

int main(){
    string name;

    cout << "Enter your name : ";
    getline(cin, name);  // read name with spaces

    Jungle j;   // 'j' is object of class 'Jungle'
    j.setVisitorName(name); // set the visitor name
    j.welcomeMessage();  // accessing class-function

    return 0;
}

/* Outputs
Enter your name : Meher Krishna
Welcome to Jungle Meher Krishna
*/