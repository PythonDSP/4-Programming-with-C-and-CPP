// elements_of_array.c

#include <stdio.h> 

int main(){

    int arr1[] = {2, 4, 6, 8}; 
    int arr2[][2] = {   // arrays are bound for all dimension except first
                {2, 3}, 
                {4, 5}, 
                {5, 3}
    };


    int size_of_arr1, elements_arr1;
    int size_of_arr2, elements_arr2, rows_arr2, col_arr2; 


    // sizeof = total size of variables in array
    size_of_arr1 = sizeof(arr1);
    printf("Size of arr1 : %d\n", size_of_arr1);

    // length = (total size) / (size of each element)
    elements_arr1 = sizeof(arr1)/sizeof(arr1[0]);
    printf("Total elements in arr1 : %d\n\n", elements_arr1);


    // sizeof = total size of variables in array
    size_of_arr2 =  sizeof(arr2);
    printf("Size of arr2: %d\n", size_of_arr2);

    // length of arr2
    elements_arr2 = sizeof(arr2)/sizeof(arr2[0][1]);
    printf("Total elements in arr2 : %d\n", elements_arr2);
    
    // number of rows
    rows_arr2 = sizeof(arr2)/sizeof(arr2[0]);
    printf("Number of rows in arr2 : %d\n", rows_arr2);
    
    col_arr2 = elements_arr2 / rows_arr2;
    printf("Number of columns in arr2 : %d\n", col_arr2);

    return 0;
}

/* Outputs
Size of arr1 : 16
Total elements in arr1 : 4

Size of arr2: 24
Total elements in arr2 : 6
Number of rows in arr2 : 3
Number of columns in arr2 : 2
*/