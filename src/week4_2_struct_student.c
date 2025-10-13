/*
 * week4_2_struct_student.c
 * Author: Matthew Harris
 * Student ID: 241ADB166
 * Description:
 *   Demonstrates defining and using a struct in C.
 *   Students should define a 'Student' struct with fields like name, id, and grade.
 *   Then create a few instances and print them.
 */

#include <stdio.h>
#include <string.h>

// TODO: Define struct Student with fields: name (char[]), id (int), grade (float)
// Example:
 struct Student {
     char name[50];
     int id;
     float grade;
};

int main(void) {
    // TODO: Declare one or more Student variables
    struct Student student_1;
    struct Student student_2;

    // TODO: Assign values (either manually or via scanf)
    strcpy(student_1.name, "Bella");
    student_1.grade = 7.9;
    printf("Enter a name for student 2: ");
    scanf("%s", student_2.name);


    // TODO: Print struct contents using printf
    printf ("Student 1 Name: %s\n", student_1.name);
    printf ("Student 1 Grade: %d\n", student_1.grade);
    printf ("Student 2 Name: %s\n", student_2.name);
    
    return 0;
}
