// small_large_array.c

#include <stdio.h>

int main(){
    int i;
    int arr_size, arr[25];
    int min_value, max_value;

    // get array size
    printf("Enter the size of array (max = 25): ");
    scanf("%d", &arr_size);

    // get values for array
    for (i=0; i<arr_size; i++){
        printf("element [%d] ->  ", i);
        scanf("%d", &arr[i]);
    }

    min_value = max_value = arr[0];  // initialize values

    // find minimum and maximum value
    for (i=0; i<arr_size; i++){
        if (min_value > arr[i])   // if min_value > current value
            min_value = arr[i];   // then replace value

        if (max_value < arr[i])   // if max_value < current value
            max_value = arr[i];   // then replace value
    }

    // print minimum and maximum value
    printf("Minimum value = %d \nMaximum value = %d", min_value, max_value);

    return 0;
}

/* Outputs
Enter the size of array (max = 25): 6
element [0] ->  3
element [1] ->  67          // maximum
element [2] ->  12
element [3] ->  1
element [4] ->  0
element [5] ->  -13         // minimum

Minimum value = -13
Maximum value = 67
*/