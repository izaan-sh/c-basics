#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    FILE * fpointer = fopen("employees.txt", "a");
    
    fprintf(fpointer, "\nKelly, Customer Service");

    fclose(fpointer);
    return 0;
}

//this one we learnt to write to a file and append to a file. append using 'a' and write using 'w'.