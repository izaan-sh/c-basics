#include <stdio.h>
#include <stdlib.h>
void hellouser(char name[]);
int main()
{
    hellouser("Izaan");
    hellouser("tom");
    hellouser("mat");
    hellouser("oscar");

    return 0;
}

void hellouser(char name[])
{
    printf("Hello, %s\n", name);
}
