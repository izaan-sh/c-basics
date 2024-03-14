#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct Student{
    char name[50];
    char major[50];
    int age;
    float gpa;
};

int main() {

    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy(student1.name, "Jim");
    strcpy(student1.major, "Business");

    struct Student student2;
    student1.age = 19;
    student1.gpa = 3.6;
    strcpy(student1.name, "Alex");
    strcpy(student1.major, "Computer Science");

    struct Student student3;
    student1.age = 20;
    student1.gpa = 3.0;
    strcpy(student1.name, "Steven");
    strcpy(student1.major, "Business");

    printf("%s\n", student1.name);
    printf("%s\n", student1.major);

    return 0;
}

//structs are created for making things easier.