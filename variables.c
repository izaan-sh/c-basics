#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char charecterName[] = "Izaan";
    int charecterAge = 67;
    printf("There once was a man named %s\n", charecterName);
    printf("He was %d years old\n", charecterAge);
    printf("He really liked his name %s\n", charecterName);
    printf("But did not like being %d\n", charecterAge);

    return 0;
}


/* 

In this tutorial i learnt about variables and how it can help in making things easier like if something appears more than once you can name it in a variable, 
so that when you want to change it everywhere you can just change the variables. %s and %d and others are used for such.

%d – the argument is treated as an integer, and presented as a (signed) decimal number. 
%s – the argument is treated as and presented as a string.
%f - the argument is treated as a floating point number.

 */
