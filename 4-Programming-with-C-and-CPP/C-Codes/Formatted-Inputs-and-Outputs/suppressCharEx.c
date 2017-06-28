// suppressCharEx.c

#include <stdio.h>

int main()
{
    int date, month, year;
    
    // define specific skip character
    printf("Enter data in dd-mm+yyyy format : ");
    scanf("%d-%d+%d", &date, &month, &year); // skip ' - ' and +
    printf("Date = %d, Month = %d, Year = %d\n\n", date, month, year); 

    // define general skip character
    printf("Enter data in dd-mm-yyyy format : ");
    // %*c read character and skip it
    scanf("%d%*c%d%*c%d", &date, &month, &year); 
    printf("Date = %d, Month = %d, Year = %d\n", date, month, year);


    return 0;
}

/* Outputs
Enter data in dd-mm+yyyy format : 12-12+2012
Date = 12, Month = 12, Year = 2012

Enter data in dd-mm-yyyy format : 12*12/2012
Date = 12, Month = 12, Year = 2012

*/