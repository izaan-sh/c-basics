#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    int age = 30;
    int * pAge = &age;
    float gpa = 3.4;
    float * pGpa = &gpa;
    char grade = 'A';
    char * pGrade = &grade;
    

    printf("age's memory address: %p\n", &age);
    return 0;
}

//notes: 
//pointers as type of data that we can work with on our programs, and its a "memory address". 