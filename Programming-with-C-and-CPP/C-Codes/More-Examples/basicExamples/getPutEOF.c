// getPutEOF.c

#include <stdio.h>

int main(void){
    int c; 

    printf("Enter characters\n");

    c = getchar();

    while (c != EOF){  // read and write till EOF
        putchar(c);   // print the characters stored in 'c'
        c = getchar();  // read next character
      }

    return 0;
}

/* Outputs 
Enter characters
Meher       // read from terminal
Meher       // printed by 'putchar'

Krishna
Krishna
^Z
*/