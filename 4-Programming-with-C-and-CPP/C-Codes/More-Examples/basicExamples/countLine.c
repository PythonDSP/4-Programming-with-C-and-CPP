// countLine.c

#include <stdio.h>

int main(void){
  int c;
  int space_count = 0, word_count = 0, line_count = 0; 

  printf("Enter characters\n");

  while ( (c = getchar()) != EOF ){  // read and write till EOF

    if (c == ' '){  // space
      space_count += 1;   // increase space_count by 1
      word_count += 1;    // increase word_count by 1
    }

    if (c == '\n'){  // Enter
        line_count += 1;    // increase line_count by 1
        word_count += 1;    // increase word_count by 1
    }
  }

  printf("Total spaces = %d\n", space_count);
  printf("Total words = %d\n", word_count);
  printf("Total lines = %d\n", line_count);

  return 0;
}

/* Outputs 
  Enter characters
  This is cat.
  That is cow.
  ^Z
  Total spaces = 4
  Total word = 6
  Total lines = 2
*/