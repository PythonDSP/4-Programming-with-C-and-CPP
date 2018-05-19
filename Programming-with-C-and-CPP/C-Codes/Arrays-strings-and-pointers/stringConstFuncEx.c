// stringConstFuncEx.c
// parameter passed as 'const' can not be modified

#include <stdio.h>

// use 'char []' or 'char *' to pass the string
void stringFunc(const char *, char []);

int main(){

    char a[] = "String1"; // size = 8 = total elements (7) + Null character (1)
    char b[] = "String2"; 

    // strings are always passed by reference
    printf("Size of a and b are %d and %d respectively\n", sizeof(a), sizeof(b));
    stringFunc(a, b); 

    return 0;
}

// strings are always passed by reference
void stringFunc(const char *a, char *b){
    int i;

    for (i=0; i<7; i++){
        printf("%c, ", a[i]);  // %s can not be used

        // below line will generate error as string 'a' is  
        // passed with 'const' keyword. 
        // a[i] = 'x';   
    }

    printf("\n");
    for (i=0; i<7; i++){
        printf("%c, ", b[i]);

        // double quote can not be used i.e. "x" is invalid
        b[i] = 'x';             
    }
    
    printf("\n");
    printf("%s, ", b);

}

/* Output
Size of a and b are 8 and 8 respectively
S, t, r, i, n, g, 1,
S, t, r, i, n, g, 2,
xxxxxxx,
*/