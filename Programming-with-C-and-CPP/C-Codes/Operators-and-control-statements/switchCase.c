//switchCase.c
// print message based on grade-value

#include <stdio.h>

int main(void)
{
    char grade = 'B';

    switch(grade){
        case ('A'): 
            printf("A: performance is excellent");
            break;
        case 'B' :
            printf("B: performance is good");
            break;
        case 'C' :
            printf("C: performance is not bad");
            break;
        default :
            printf("Please, work hard...");
    }

    return 0;
}

/* Outputs
B: performance is good
*/