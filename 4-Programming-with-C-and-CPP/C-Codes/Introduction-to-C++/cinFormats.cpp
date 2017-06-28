//cinFormats.cpp

#include <iostream>
#include <iomanip>  // setw
using namespace std; 

int main(void){

    int i, j; 


    cout << "Enter Hexadecimal Value:\t";
    cin >>  hex >> i;
    cout << "i = " << i << endl;

    cout << "Enter Octal Value:\t";
    cin >> oct >> j;
    cout << "j = " << j;

    return 0;

    return 0; 
}

/*
Enter Hexadecimal Value: 0xc
i = 12

Enter Octal Value:       014
j = 12
 */