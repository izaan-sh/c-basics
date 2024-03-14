#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    int index = 1;
    //while doing while loops, firstly its going to check if the condition given in the brackets is true, if yes it will continue with the code below, otherwise it wont.
    while (index <= 6) {
        printf("%d\n", index);
        index++;
    }
    
    int index2 = 4;
    //do while loops are opposite! it does the calculations first and then goes on to check the condition.
    do {
        printf("%d\n", index2);
        index2++;
    }while(index2 <= 5);
    return 0;
}