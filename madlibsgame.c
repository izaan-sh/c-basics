#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char color[20];
    char Pluralnoun[20];
    char celebrityF[20];
    char celebrityL[20];

    printf("Enter a color: ");
    scanf("%s", color);

    printf("Enter a Pluralnoun: ");
    scanf("%s", Pluralnoun);
    
    printf("Enter a celebrity (full name): ");
    scanf("%s%s", celebrityF, celebrityL);

    printf("Roses are %s\n", color);
    printf("%s are blue\n", Pluralnoun);
    printf("I love %s %s\n", celebrityF, celebrityL);

    return 0;
}