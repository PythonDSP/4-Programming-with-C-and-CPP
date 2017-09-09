//scanfEx.c

#include <stdio.h>

int main(){

   char name[30]; // variable 'name' of type character with max length 30

   printf("Enter your name: \t"); // show message on the termainal
   scanf("%s", name); // get the value of name from user

   printf("Hello %s", name);  // Print Hello + name-provided-by-user

   return 0;
}

/* Outputs
Enter your name:    Meher
Hello Meher */