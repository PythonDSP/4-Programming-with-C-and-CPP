// find_duplicate.c

#include <stdio.h>

int main(){
    int i, j, flag;
    int arr_size, arr[25];

    // get array size
    printf("Enter the size of array (max = 25): ");
    scanf("%d", &arr_size);

    // get values for array
    for (i=0; i<arr_size; i++){
        printf("element [%d] ->  ", i);
        scanf("%d", &arr[i]);
    }

    // find duplicates
    for (i=0; i<arr_size-1; i++){  // 0 to arr_size - 2
        for (j=i+1; j<arr_size; j++){ // i+1 to arr_size - 1
            if ( arr[i] == arr[j] ){
                flag = 1;               // duplicate found
                printf("Duplicate found at locations %d and %d\n", i, j);
            }
        }
    }

    // if no duplicates i.e. flag == 0
    if (flag != 1)
        printf("No duplicates found");

    return 0;
}

/* Outputs
Enter the size of array (max = 25): 5
element [0] ->  5
element [1] ->  3
element [2] ->  2
element [3] ->  5
element [4] ->  3

Duplicate found at locations 0 and 3
Duplicate found at locations 1 and 4
*/