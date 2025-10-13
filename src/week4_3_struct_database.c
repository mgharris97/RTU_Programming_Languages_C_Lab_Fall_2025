/*
 * week4_3_struct_database.c
 * Author: Matthew Harris
 * Student ID: 241ADB166
 * Description:
 *   Simple in-memory "database" using an array of structs.
 *   Students will use malloc to allocate space for multiple Student records,
 *   then input, display, and possibly search the data.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// TODO: Define struct Student with fields name, id, grade
struct Student {
    char name [50];
    char id [50];
    float grade;
};

int main(void) {
    int n;
    struct Student *students = NULL;

    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number.\n");
        return 1;
    } 

    // TODO: Allocate memory for n Student structs using malloc
    students = malloc(n * sizeof(struct Student));

    // TODO: Read student data in a loop
    for (int i = 0; i < n; i++)
    {
        printf("Student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);

        printf("ID: ");
        scanf("%s", students[i].id);

        printf("Grade: ");
        scanf("%f", &students[i].grade);
    }
    

    // TODO: Display all student records in formatted output
    for (int i = 0; i < n; i++)
    {
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("ID: %s\n", students[i].id);
        printf("Grade: %.2f\n", students[i].grade); 
        printf("\n");   
    }


    // Optional: Compute average grade or find top student

    // TODO: Free allocated memory

    return 0;
}
