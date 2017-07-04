// namespaceEx2.cpp
// namespace inside the namespace

#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

// namespace math1
namespace math1{
    float pi = 3.14;
   
   namespace pm{
        float perimeter(float diameter){
            return (pi*diameter); 
        }
    }
}


float perimeter(float );

float perimeter(float diameter){
        return (3.15*diameter);
    }

int main(){
    int pi = 3;
    int diameter; 

    // using std::cout is declared at the top
    cout << "Enter diameter : "; // therefore only 'cout' is used here
    std::cin >> diameter; // std::cin is used here

    cout << "pi in main() : " << pi << endl; // print local 'pi'
    cout << "pi in namespace-math1 : " << math1::pi << endl;  // print 'pi' in namespace 'math1'

    cout << "permiter = : " << perimeter(100) << endl;
    cout << "permiter from namespace-math1= : " << math1::pm::perimeter(100) << endl;

    return 0;
}

/* Outputs
Enter diameter : 10
pi in main() : 3
pi in namespace-math1 : 3.14
permiter = : 315
permiter from namespace-math1= : 314
*/