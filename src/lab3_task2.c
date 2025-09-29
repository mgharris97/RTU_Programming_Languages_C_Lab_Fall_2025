/*
 * Lab 3, Task 2
 * Matthew Harris, 241ADB166
 *
 * Practice using pointers as functiodockn parameters.
 * Implement:
 *   - swap (exchange values of two ints)
 *   - modify_value (multiply given int by 2)
 *
 * Rules:
 *   - Use pointers to modify variables in the caller.
 *   - Demonstrate changes in main.
 *
 * Example:
 *   int a = 5, b = 10;
 *   swap(&a, &b);   // now a = 10, b = 5
 *
 *   modify_value(&a); // now a = 20
 */

#include <stdio.h>

// Function prototypes
void swap(int *x, int *y);
void modify_value(int *x);

int main(void) {
    int a = 3, b = 7;
    printf("Before swap: a=%d, b=%d\n", a, b);
    swap(&a, &b);
    printf("After swap: a=%d, b=%d\n", a, b);

    modify_value(&a);
    printf("After modify_value: a=%d\n", a);
    

    return 0;
}

// Implement functions below
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
    // TODO: swap values using a temporary variable
    //done
}

void modify_value(int *x) {
    (*x) *= 2;
    // TODO: multiply value by 2
    //done

}
