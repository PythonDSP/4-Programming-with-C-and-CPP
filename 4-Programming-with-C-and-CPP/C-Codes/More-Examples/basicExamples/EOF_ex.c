// EOF_ex.c

#include <stdio.h>

int main(void){
    int c; 

    printf("EOF = %d\n", EOF);  // EOF = -1

    printf("Enter characters\n");

    // ctrl+z = -1, Enter = 10; space = 32
    while (1){  
        c = getchar();
        printf("%c = %d\n", c, c);

        if (c == 'E') // type 'E' to exit the program
          break;
     }
     return 0;
}

/* Outputs 
EOF = -1

Enter characters

tit tat       // below are the values of individual character
t = 116 
i = 105
t = 116
  = 32         // space
t = 116
a = 97
t = 116
              // enter
 = 10          

this that
t = 116
h = 104
i = 105
s = 115
  = 32
t = 116
h = 104
a = 97
t = 116

 = 10

^Z             // ctrl+z = end of file
  = -1    

E              // terminate the execution
E = 69
*/