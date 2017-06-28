// countChar.c

#include <stdio.h>

int main(void){
  int count = 0; 

  printf("Enter characters\n");

  while ( getchar() != EOF ){  // read and write till EOF
    count += 1;   // increase count by 1
  }

  printf("Total words = %d\n", count);

  return 0;
}

/* Outputs 
Enter characters    // run 1
This                // 4 characters + 1 enter = 5
^Z
Total words = 5

Enter characters    // run 2
This
That
^Z
Total words = 10
^Z
*/