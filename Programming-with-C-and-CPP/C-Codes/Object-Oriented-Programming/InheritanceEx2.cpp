// InheritanceEx2.cpp

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

    // empty constructor
    Jungle(){ // it is required as child-class is using empty constructor

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


class RateJungle : public Jungle{
private: 
    int feedback;
    string name;
public:
    // constructor 1
    RateJungle(string name) : Jungle(name){
        feedback = 0;  // set feedback to zero by default
    }

    // constructor 2
    RateJungle(string name, int value) : Jungle(name){
        feedback = value;  // set feedback to zero by default
    }

    // constructor 3 : empty constructor
    RateJungle(){  // empty constructor in parent class is compulsory

    }

    void setFeedback(int value){
        feedback = value;
    }

    void printRating(){
        cout << "Thanks " << getVisitorName() << endl;
        cout << "Your feedback is set as : " << feedback << endl;
    }
};


int main(){
    string name;

    RateJungle r("Meher");   // constructor 1 will be initialized
    RateJungle s("Krishna", 3);   // constructor 2 will be initialized
    RateJungle p;

    // Feedback is set to 0 by constructor
    r.printRating();  // print the feedback value     
    r.setFeedback(2); // provide feedback value
    r.printRating();  // print the feedback value

    s.printRating();  // print the feedback value

    p.setVisitorName("Patel");  // constructor 3 is used 
    p.setFeedback(5);
    p.printRating();

    return 0;
}

/* Outputs
Thanks Meher
Your feedback is set as : 0
Thanks Meher
Your feedback is set as : 2

Thanks Krishna
Your feedback is set as : 3

Thanks Patel
Your feedback is set as : 5
*/