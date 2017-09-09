// stringType.cpp
// parameter passed as 'const' can not be modified

#include <iostream>
using namespace std; // string is defined in it
#define SIZE 10

void stringFunc(const string, string);

int main(){

    string a; // size of string is 4 Bytes
    string b = "String2"; // size of string is 4 Bytes

    cout << "Enter string a: ";
    cin >> a;

    // strings are always passed by reference
    cout << "Size of a and b are "<< sizeof(a)  
        << " and " << sizeof(b)  << " respectively\n";

    stringFunc(a, b); 

    return 0;
}

// strings are always passed by reference
void stringFunc(const string a,  string b){
    int i;

    for (i=0; i<SIZE; i++){
        cout << a[i] << ", ";  

        // below line will generate error as string 'a' is  
        // passed with 'const' keyword. 
        // a[i] = 'x';   
    }

    cout << endl;
    for (i=0; i<SIZE; i++){
        cout << b[i] << ", ";

        // double quote can not be used i.e. "x" is invalid
        b[i] = 'x';            
    }

    // cout << endl;
    // for (i=0; b[i] != '\0'; i++){
    //     cout << b[i] << ", ";

    //     b[i] = 'x';            
    // }
    
    cout << endl << a;
    cout << endl << b;

}

/* Output
Enter string a: Meher Krishna           // only Meher will be read
Size of a and b are 4 and 4 respectively
M, e, h, e, r,  ,  ,  ,  ,  ,
S, t, r, i, n, g, 2,  , $, ╙,
Meher
xxxxxxx
*/