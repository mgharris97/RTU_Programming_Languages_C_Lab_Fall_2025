/*
 * Lab 3, Task 3
 * Matthew Harris, 241ADB166
 *
 * Implement basic string handling functions.
 * Write your own versions of:
 *   - my_strlen (finds string length)
 *   - my_strcpy (copies string from src to dest)
 *
 * Rules:
 *   - Do not use <string.h> functions for strlen/strcpy.
 *   - Use loops and manual pointer/array access.
 *
 * Example:
 *   char s[] = "hello";
 *   int len = my_strlen(s);   // should return 5
 *
 *   char buffer[100];
 *   my_strcpy(buffer, s);     // buffer now contains "hello"
 */

#include <stdio.h>

// Function prototypes
int my_strlen(const char *str);
void my_strcpy(char *dest, const char *src);

int main(void) {
    // TODO: Test your functions here
    char test[] = "Programming in C";
    char copy[100];

    int len = my_strlen(test);
    printf("Length: %d\n", len);

    my_strcpy(copy, test);
    printf("Copy: %s\n", copy);

    return 0;
}

// Implement functions below
int my_strlen(const char *str) {
    //return str.length();
    int count = 0;
    while (str[count] != "\0")
    {
        count++;
    }
    return count;
    // TODO: count characters until '\0'
    //done
}

void my_strcpy(char *dest, const char *src) {
    // TODO: copy characters until '\0'
    int count = 0;
    while (src[count] != "\0")
    {
        dest[count] = src[count];
        count++;
    }
    dest[count] = "\0";
    return dest;
}
