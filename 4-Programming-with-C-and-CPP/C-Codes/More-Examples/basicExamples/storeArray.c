// storeArray.c

#include <stdio.h>

int main(){
    int i, arr_size, arr[25];

    // get array size
    printf("Enter the size of array (max = 25): ");
    scanf("%d", &arr_size);

    // get values for array
    for (i=0; i<arr_size; i++){
        printf("element [%d] ->  ", i);
        scanf("%d", &arr[i]);
    }

    // print values in array
    printf("You entered following values, \n");
    for (i=0; i<arr_size; i++){
        printf("%d, ", arr[i]);
    }

    return 0;
}
/* Outputs
Enter the size of array (max = 25): 4
element [0] ->  2
element [1] ->  3
element [2] ->  5
element [3] ->  8

You entered following values,
2, 3, 5, 8,
*/