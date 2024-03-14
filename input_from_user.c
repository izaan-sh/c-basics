#include <stdio.h>
#include <stdlib.h>

int main() {

    char name[20];
    printf("Enter your name: ");
    fgets(name, 20, stdin);
    printf("Your name is %s", name);

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You are %d years old\n", age);

    float gpa;
    printf("Enter your gpa: ");
    scanf("%f", &gpa);
    printf("Your gpa is %f\n", gpa); 

    return 0;
}

/*
and percent is for storing the scanned input into the variable.
*/