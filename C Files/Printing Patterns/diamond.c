#include <stdio.h>                         //preprocessor commands

int main()                                 //main function
{
    int i, j, space=4;                     /*The number of rows taken are 5*/
    for (j=1;j<=5;j++)
    {
        for (i=1;i<=space;i++)
        {
            printf(" ");
        }
        space--;
        for (i=1;i<=2*j-1;i++)
        {
            printf("*");
        }
        printf("\n");
    }
    space=1;
    for (j=1;j<=5;j++)
    {
        for (i=1;i<=space;i++)
        {
            printf(" ");
        }
        space++;
        for (i=1;i<=2*(5-j)-1;i++) 
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}