// week5_task3_student_management_system.c
// Task 3: Mini-project – Student management system with file persistence
// Week 5 – Files & Modular Programming
// TODO: Implement functions to load, save, add, and list students.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100
#define NAME_LEN 50
#define DATA_FILE "students.txt"

typedef struct {
    char name[NAME_LEN];
    int id;
    float gpa;
} Student;

// Function prototypes
int load_students(Student arr[]);
void save_students(Student arr[], int count);
void add_student(Student arr[], int *count);
void list_students(Student arr[], int count);

int main(void) {
    Student students[MAX_STUDENTS]; //array of student structs
    int count = 0;
    int choice;

    // TODO: Load existing data from file using load_students()

    do {
        printf("\n=== Student Management System ===\n");
        printf("1. List students\n");
        printf("2. Add student\n");
        printf("3. Save and Exit\n");
        printf("Select an option: ");
        scanf("%d", &choice);
        getchar(); // clear newline

        switch (choice) {
            case 1:
                list_students(students, count);
                break;
            case 2:
                add_student(students, &count);
                break;
            case 3:
                save_students(students, count);
                break;
            default:
                printf("Invalid option. Try again.\n");
        }
    } while (choice != 3);

    return 0;
}

// TODO: Implement load_students()
// Open DATA_FILE, read records until EOF, return number of records loaded
int load_students(Student arr[]) {
    Student temp;
    int count = 0;
    FILE *fp = fopen(DATA_FILE, "r"); //fprtintf automatically updates line position
    if (fp == NULL)
    {
        fprintf(stderr, "File %s could not be opened.", DATA_FILE);
        return 0;
    }
    while (fscanf(fp, "%49s %d %f", temp.name, &temp.id, &temp.gpa) == 3) //while the number of items in a line of .txt is 3 
    {
        count++;
    }
    fclose(fp);
    return count; //the number of students in the .txt file
}

// TODO: Implement save_students()
// Write all students to DATA_FILE
void save_students(Student arr[], int count) {
    // ...
    FILE *fp = fopen(DATA_FILE, "w");
    if (fp == NULL)
    {
        fprintf(stderr, "File %s cannot be written to", DATA_FILE);
        return;
    }
    for (int i = 0; i < count; i++)
    {
        fprintf(fp, "%-20s %10d %5.2f\n", arr[i].name, arr[i].id, arr[i].gpa);
    }
    fclose(fp);
}

// TODO: Implement add_student()
// Read input from user and append to array
void add_student(Student arr[], int *count) {
    //make sure to count++
    printf("Enter name: ");
    scanf("%49s", arr[*count].name); //name can only be up to 49 chars
    printf("Enter ID: ");
    scanf("%d", &arr[*count].id); //scanf needs memeory location and with string, it points to to the first memory locaiton
    printf("Enter GPA: ");
    scanf("%f", &arr[*count].gpa);  
    (*count)++; //*count++ would change memery address, (*count++) increments the count
}

// TODO: Implement list_students()
// Print all students in readable format
void list_students(Student arr[], int count) {
    if (count == 0)
    {
        printf("No students to display.\n");
        return;
    }
    printf("\n%-20s %10s %5s\n", "Name", "ID", "GPA");
    printf("---------------------------------------");
    for (int i = 0; i < count; i++)
    {
        printf("\n%-20s %10d %.2f\n", arr[i].name, arr[i].id, arr[i].gpa);
    }
}
