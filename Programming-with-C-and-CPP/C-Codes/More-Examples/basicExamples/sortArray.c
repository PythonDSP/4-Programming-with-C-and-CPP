// sortArray.c

#include <stdio.h>

void sortArray(int [], int);  // function prototype

// function for sorting array : bubble sort
void sortArray(int a[], int size){
    int i, j, temp;
    for (i = 0; i < size; i++){
        for (j = 0; j < size-i-1; j++){ 
            if ( a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main(){
    int i;
    int arr_size, arr[25];

    // get array size
    printf("Enter the size of array (max = 25): ");
    scanf("%d", &arr_size);

    // get values for array
    for (i=0; i<arr_size; i++){
        printf("element [%d] ->  ", i);
        scanf("%d", &arr[i]);
    }

    // function to sort array
    sortArray(arr, arr_size);

    // print the sorted array
    for (i=0; i<arr_size; i++)
        printf("%d, ", arr[i]);

    return 0;
}

/* Outputs
Enter the size of array (max = 25): 6
element [0] ->  32
element [1] ->  43
element [2] ->  23
element [3] ->  1
element [4] ->  32
element [5] ->  455
1, 23, 32, 32, 43, 455,
*/