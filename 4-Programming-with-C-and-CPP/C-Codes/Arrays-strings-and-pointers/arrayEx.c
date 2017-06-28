// arrayEx.c
// creating and accessing the elements of array

#include <stdio.h>

int main()
{
    int a[5]; // uninitialized array of size 5 i.e. a[0]-a[4]
    float b[3]={2, 4.5, 6}; // initialized array of size 3
    int c[] = {3, 5};
    int d[5] = {3, 5};  // d[2]-d[4] will have zero value (not garbage)

    // int e[]; // error, either provided size or initialize it 

    printf("a[0] = %d\n", a[0]);  // uninitialized array has garbage value

    printf("c[0] = %d\n", c[0]); // 3

    printf("d[0] = %d\n", d[0]); // 3
    printf("d[2] = %d\n", d[2]); // 0 (not garbage)
    printf("d[4] = %d\n", d[4]); // 0 (not garbage)

    // print all values of array b	
    // %10s create the width of 10 after 'element' 
    // and 'value' will be printed as right-aligned e.g. see 4.5 in output
    printf("%s %10s\n", "element", "value");
    for (int i=0; i<3; i++){
      printf("%4d %12.1f\n", i, b[i]); // %12.1f = show minimum 12 integer & 1 decimal 
    }

    // assign values of array a
    for (int i=0; i<5; i++){
      a[i] = 2*i;
    }

    // print values of array a
    printf("%s %10s\n", "element", "value");
    for (int i=0; i<5; i++){
      printf("%4d %12d\n", i, a[i]);  // %12.1f = show minimum 12 integer and 1 decimal place 
    }
    return 0;
}

/* Outputs

a[0] = 1998543804
c[0] = 3
d[0] = 3
d[2] = 0
d[4] = 0

element      value
   0          2.0
   1          4.5
   2          6.0

element      value
   0            0
   1            2
   2            4
   3            6
   4            8
*/