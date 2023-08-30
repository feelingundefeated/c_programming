#include<stdio.h>
int main() {
    // Create a 2D array with 3 rows and 4 columns
    int myArray[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Access elements in the array
    printf("Element at row 1, column 2: %d\n", myArray[1][2]); // prints 7

    // Modify an element in the array
    myArray[0][0] = 99;
    printf("Element at row 0, column 0: %d\n", myArray[0][0]); // prints 99

    return 0;
}
