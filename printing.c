#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int favNum = 7;
    char number[] = "number";
    float decimal = 9.5;
    printf("My favorite %s is %d and my favorite float number is %f", number,  favNum, decimal);
    
    
    return 0;
}


/*
notes: 

%d – the argument is treated as an integer, and presented as a (signed) decimal number.
%s – the argument is treated as and presented as a string.
%f - the argument is treated as a floating point number.

*/
