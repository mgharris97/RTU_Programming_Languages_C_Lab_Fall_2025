/*
 * week4_1_dynamic_array.c
 * Author: Matthew Harris
 * Student ID: 241ADB166
 * Description:
 *   Demonstrates creation and usage of a dynamic array using malloc.
 *   Students should allocate memory for an integer array, fill it with data,
 *   compute something (e.g., average), and then free the memory.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    int *arr = NULL;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size.\n");
        return 1;
    } 

    // TODO: Allocate memory for n integers using malloc
    int *arr = malloc(n * sizeof(int)); //allocate enough memory to store n ints. 

    // TODO: Check allocation success
    if (arr == NULL)
    {
        fprintf(stderr, "Memory allocation failed");
    }
    // TODO: Read n integers from user input and store in array
    for (int i = 0; i < n; i++)
    {
        printf("Enter integer %d\n", i);
        scanf("%d", &arr[i]);
    }

    // TODO: Compute sum and average
    int sum = 0;
    for (int i =0; i<n; i++)
    {
        sum += arr[i];
    }
    double avg = (double)sum / n;

    // TODO: Print the results
    printf("sum = %d\n", sum);
    printf("Average = %d\n", avg);

    // TODO: Free allocated memory
    free(arr);

    return 0;
}
