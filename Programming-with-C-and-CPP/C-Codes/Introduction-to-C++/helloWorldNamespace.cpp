// helloWorldNamespace.cpp

#include <iostream> // required for cin and cout
//use below line to use cout in the main(), instead of std::cout.
using namespace std;

int main(void) //return type: int, input arguments: void i.e. none
{
    cout << "Hello \nWorld. " << "How Are you?" << endl;

    /* cout << // line is terminated by ';' not by white spaces
     "Hello \nWorld. " 
     << "How Are you?" << endl; */

    return 0; //return 0 i.e. int, 
}

/* Outputs
Hello
World. How Are you?
*/