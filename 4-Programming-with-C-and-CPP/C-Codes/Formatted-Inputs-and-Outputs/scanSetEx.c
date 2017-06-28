// scanSetEx.c

#include <stdio.h>

int main()
{
    char a[20];
    
    printf("Write Yes, No, Yyes, YNo : ");
    // read the string starts from 'y, Y, n or N'
    // and select string till only these letters appear
    scanf("%[yYnN]", a);       

    printf("Your answer is : %s\n", a);
    return 0;
}

/* Outputs
Write Yes, No, Yyes, YNo :  Yes
Your answer is : Y

Write Yes, No, Yyes, YNo : YNo
Your answer is : YN
*/