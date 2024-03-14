#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float cube(float num) {
    float result = num * num * num;
    return result;
}

int main() {
    printf("Answer: %f", cube(3.0));
    return 0;
}