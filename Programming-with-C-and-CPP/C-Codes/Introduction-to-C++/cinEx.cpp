//cinEx.cpp

#include <iostream>
using namespace std;

int main(){

   char name[30]; // variable 'name' of type character with max length 30

   cout << "Enter your name: \t"; // show message on the termainal
   cin >> name; // get the value of name from user

   cout << "Hello " <<  name;  // Print Hello + name-provided-by-user

   return 0;
}

/* Outputs
Enter your name:    Meher
Hello Meher */