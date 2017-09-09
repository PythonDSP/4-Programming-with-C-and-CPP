// invertedScanSetEx.c

#include <stdio.h>

int main()
{
    char a[20];
    
    printf("Data will be read till Y or Y appears \n");
    printf("Enter string :  ");
    // read the string till  'y or Y' appear
    scanf("%[^yY]", a);       

    printf("You entered : %s\n", a);
    return 0;
}

/* Outputs
Data will be read till Y or Y appears
Enter string :  Meher Krishna y
You entered : Meher Krishna

Data will be read till Y or Y appears
Enter string :  Meher Krishna y Bye Bye
You entered : Meher Krishna
*/