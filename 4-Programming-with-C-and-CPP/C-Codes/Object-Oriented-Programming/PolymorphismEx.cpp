// PolymorphismEx.cpp

#include <iostream>
using namespace std;

class Animal{
public:
    void scarySound(){
        cout << "Animals are running away due to scary sound." << endl;
    }
};

class Bird{
public:
    void scarySound(){
        cout << "Birds are flying away due to scary sound." << endl;
    }
};

// empty class
class Insect{
};

int main(){
    Animal a;
    Bird b;
    Insect i;

    a.scarySound();
    b.scarySound();

    return 0;
}

/* Outputs
Animals are running away due to scary sound.
Birds are flying away due to scary sound.
*/