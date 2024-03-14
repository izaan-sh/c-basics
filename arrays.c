#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    //creating the array
    int luckyNumbers[] = {4, 8, 10, 12, 13, 14, 15, 16, 17};
    
    //if i wanted to modify a number in the array then i would have to do this
    luckyNumbers[1] = 9;

    //printing a specific number in the array
    printf("%d\n", luckyNumbers[1]);


    //strings are also an array...
    char phrase[20] = "Array";
    printf("%s", phrase);

    return 0;

}