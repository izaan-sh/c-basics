#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char grade; 
    printf("Enter you grade: ");
    scanf("%s", &grade);


    switch (grade) {
        case 'A':
        case 'a':
        printf("You did great!");
        break;
        case 'B':
        case 'b':
        printf("You did alright!");
        break;
        case 'C':
        case 'c':
        printf("You did poorly!");
        break;
        case 'D':
        case 'd':
        printf("You did very bad!");
        break;
        case 'F':
        case 'f':
        printf("You failed!");
        break;
        default: printf("Invalid grade"); 
        }


    return 0;
}