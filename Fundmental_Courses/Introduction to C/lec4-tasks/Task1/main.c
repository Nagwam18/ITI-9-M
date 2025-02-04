#include <stdio.h>
#include <stdlib.h>

int main()
{
    char fName[10];
    char lName[10];
    char fullName[10];

    gets(fName);
    gets(lName);

    strcpy(fullName, fName);
    strcat(fullName, " ");
    strcat(fullName, lName);
    printf("The full name is: %s\n", fullName);












    return 0;
}
