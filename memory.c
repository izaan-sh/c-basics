#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int age = 30;
    float gpa = 3.4;
    char grade = 'A';

    printf("Age: %p\ngpa: %p\ngrade: %p", &age, &gpa, &grade);

    return 0;
}

// when we wanna print out a memory address we say %p