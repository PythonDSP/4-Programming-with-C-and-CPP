// constructorEx.cpp

#include <iostream>
using namespace std;

class Jungle{
private: // not accessible outside the class
    string visitorName;

public:  // to allow access to function 'welcomeMessage' outside the class
    
    // constructor : automatically called at the time of object-creation
    Jungle(string name){
        setVisitorName(name);
    }

    // setVisitorName is accessible outside the class, which will set the visitor name
    void setVisitorName(string name){
        visitorName = name;
    }

    // function to retrieve the visitorName as it is not accessible directly
    string getVisitorName(){
        return visitorName;
    }

    void welcomeMessage(){
        cout << "Welcome to Jungle " << getVisitorName();
    }
};

int main(){
    string name;

    Jungle j("Meher Krishna");   // 'j' is object of class 'Jungle'
    j.welcomeMessage();  // accessing class-function

    return 0;
}

/* Outputs
Enter your name : Meher Krishna
*/