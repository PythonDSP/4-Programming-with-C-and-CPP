//defineConstantEx.c

#include <iostream> 
#include <cmath> // use this or below for maths library
// #include <math.h>

using namespace std;

#define pi 3.14
#define blog "PythonDSP"

int main(void)
{
    const int radius=2;
    float area;

    area = pi*pow(radius,2); // pow(2, 3) = 2*2*2
    cout<<"Area of circle = "<<area<<endl;

    cout<<"Blog name: "<<blog;

    // pi = 3; // error as constant can not be modified
    // radius = 3; // error as constant can not be modified
    return 0;
}