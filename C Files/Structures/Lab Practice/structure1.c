#include <stdio.h>
#include <string.h>

struct myStructure
{
    int myNum;
    char myLetter;
    char myString[30];
};

int main()
{
    struct myStructure s1;
    struct myStructure s2;
    struct myStructure s3 = {42, 'v', "Text"};
    struct myStructure s4; // Corrected typo in structure name

    s4 = s3;

    s1.myNum = 73;
    s1.myLetter = 'd';

    s2.myNum = 65;
    s2.myLetter = 'S';

    printf("%d\t%c\t%s\n", s3.myNum, s3.myLetter, s3.myString);
    printf("%d\t%c\t%s\n", s4.myNum, s4.myLetter, s4.myString);
    printf("s1 Number = %d\n", s1.myNum);
    printf("s1 Letter = %c\n", s1.myLetter);
    printf("s2 Number = %d\n", s2.myNum);
    printf("s2 Letter = %c\n", s2.myLetter);

    return 0;
}