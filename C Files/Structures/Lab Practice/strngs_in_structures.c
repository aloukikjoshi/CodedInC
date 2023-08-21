#include <stdio.h>
#include <string.h>

struct myStructure
{
    char myString[30];
};

int main()
{
    struct myStructure s1;

    //Assign the value to the string using strcpy function
    strcpy(s1.myString, "Some Text");

    printf("s1 String = %s", s1.myString);
}