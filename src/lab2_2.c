#include <stdio.h>

/*
    Task:
    Write a function `long long factorial(int n)` that computes n!
    using a loop (not recursion).

    In main():
      - Ask user for an integer n
      - If n is negative, print an error and exit
      - Otherwise, call factorial and print the result
*/

long long factorial(int n) {
    // TODO: compute factorial iteratively
    if (n == 1)
    {
        return 1;
    } else {
        int result = 1;
    for(int i = n; i>0; i--)
    {
        result *= i; 
    }
    return result;
    }
     // placeholder
}

int main(void) {
    int n;

    printf("Enter a non-negative integer n: ");
    scanf("%d", &n);
    while (n < 1)
    {
        printf ("Input value cannot be less than 1. Please enter a valid value: ");
        scanf("%d", &n);
    }
    printf ("The factoria of %d! is %d", n, factorial(n));

    // TODO: validate input, call function, print result

    return 0;
}
