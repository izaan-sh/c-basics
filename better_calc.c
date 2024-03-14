#include <stdio.h>
#include <stdlib.h>

int main() {

    float num1;
    float num2;
    char op;

    printf("Enter a number: ");
    scanf("%f", &num1);
    printf("Enter operator: ");
    scanf(" %c", &op);
    printf("Enter a number: ");
    scanf("%f", &num2);

    if(op == '+') {
        printf("%f", num1 + num2);
    } else if (op == '-') {
        printf("%f", num1 - num2);
    } else if (op == '/') {
        printf("%f", num1 / num2);
    } else if (op == '*') {
        printf("%f", num1 * num2);
    } else {
        printf("Invalid Operator. Please enter a valid Operator.\n");
    }

    return 0;
}

//this is a better calculator than the one we made before at the beginning, here we used a simple if statement and structured the calculation. 