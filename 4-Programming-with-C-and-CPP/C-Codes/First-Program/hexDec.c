//hecDec.c

#include <stdio.h>

int main(void){
    
    int x = 15;

    // hexadecimal number starts with 0x
    // h is defined as hex 0xb = 13(oct) = 11(dec)
    int h = 0xb;

    // octal number, starts with 0
    int o = 013;

    printf(" hex value of x = %x\n", x); // hex
    printf(" oct value of x = %o\n", x); // octal
    printf(" decimal value of x = %d\n\n", x); // decimal

    printf(" hex value of h = %x\n", h); // hex
    printf(" oct value of h = %o\n", h); // octal
    printf(" decimal value of h = %d\n\n", h); // decimal

    printf(" hex value of o = %x\n", o); // hex
    printf(" oct value of o = %o\n", o); // octal
    printf(" decimal value of o = %d\n\n", o); // decimal
    

    return 0; 
}

/*
 hex value of x = f
 oct value of x = 17
 decimal value of x = 15

 hex value of h = b
 oct value of h = 13
 decimal value of h = 11

 hex value of o = b
 oct value of o = 13
 decimal value of o = 11  
 */