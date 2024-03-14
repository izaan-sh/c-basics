#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int max(int num1, int num2, int num3) {
    int result;
    
    if(num1 >= num2 && num1 >= num3) {
        result = num1;
    } else if(num2 >= num1 && num2 >= num3){
        result = num2;
    } else {
        result = num3;
    }
    return result;
}

int main() {
    printf("%d", max(4,10,100));
}

/*

Notes for if statements:

&& checks both is true or not
|| checks any 1 is true or not
!= means not equal to
== means equal to
<= means less than or equal to
>= means greater than or equal to
!() means negation - example: (!(3>2)) means (3<2)

*/