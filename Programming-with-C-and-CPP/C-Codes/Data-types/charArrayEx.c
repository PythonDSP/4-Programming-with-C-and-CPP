//charArrayEx.c

#include <stdio.h>

int main(){

    char a[30] = "Meher";  // character array with initialization
    const char *b = "Patel"; // character array using pointer and with initialization

    printf("Initial name : %s %s\n", a,b);

    // a = "Krishna";  // not allowed
    printf("Enter new name : ");
    scanf("%s", a);

    // scanf("%s", b);  // not allowed
    b = "New World";
    printf("%s %s", a,b);

    return 0;
}

/* Outputs
Initial name : Meher Patel
Enter new name : Hello
Hello New World */