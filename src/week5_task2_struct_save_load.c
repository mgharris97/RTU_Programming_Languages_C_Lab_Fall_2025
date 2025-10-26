// week5_task2_struct_save_load.c
// Task 2: Save and load structured records from a file
// Week 5 – Files & Modular Programming
// TODO: Complete function implementations and file handling logic.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 50 //max name length

typedef struct {
    char name[MAX_NAME_LEN];
    int age;
    float gpa;
} Student;  //visual difference between traditional struct Student {}. typedef struct{} allows Student to be used as a datatype without needing struct specifier 

// Function prototypes
void save_student(Student s, const char *filename) //function that will return nothing
{
    FILE *fp = fopen(filename,"w");
    if (fp == NULL)
    {
        fprintf(stderr, "File %s cannot be opened\n", filename);
        return;
    }
    fprintf(fp, "Name: %s\n", s.name);
    fprintf(fp, "Age: %d\n",s.age);
    fprintf(fp, "GPA: %.2f\n", s.gpa); //Cleaner output
    fclose(fp);
}
Student load_student(const char *filename) //function that will return type Student
{
    FILE *fp = fopen (filename, "r");
    if (fp == NULL)
    {
        fprintf(stderr, "File %s cannot be opened for reading\n", filename);
        Student empty = {"",0,0.0};
        return empty;
    }
    Student s;
    //fscanf(fp, "Name: %s\nAge: %d\nGPA: %f\n",s.name, &s.age, &s.gpa) == 3;//fscanf() returns an integer that represents the number of input items successfully matched and assigned.
    fscanf(fp, "Name: %s\n", s.name);
    fscanf(fp, "Age: %d\n", &s.age);
    fscanf(fp, "GPA: %f\n", &s.gpa);
    fclose(fp);
    return s;
}

int main(void) {
    Student s1; //creating a new student type with variables name, age, gpa     
    strcpy(s1.name, "Alice");
    s1.age = 21;
    s1.gpa = 3.75f;

    const char *filename = "student.txt";

    // TODO: Call save_studsent() to save student data to file
    save_student(s1, filename);
    // TODO: Call load_student() to read data back into a new struct
    Student s2 = load_student(filename);
    // TODO: Print loaded data to confirm correctness
    //Saving student to file...
    //Loading student from file...
    //Loaded student: Alice, 21, GPA 3.75
    printf("Saving student to file...\n");
    printf("Loaded student from file...\n");
    printf("Loaded student from file: %s, %d, GPA %.2f\n", s2.name, s2.age, s2.gpa);

    return 0;
}

// TODO: Implement save_student()
// Open file for writing, check errors, write fields, then close file


// TODO: Implement load_student()
// Open file for reading, check errors, read fields, then close file

