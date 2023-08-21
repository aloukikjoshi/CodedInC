#include <stdio.h>                             //preprocessor commands

int main()                                     //Main Function
{
    int n=1, space, i, j;
    for (i=1;i<=4;i++)                         //Acccording to question Rows=4
    {
        for (space=1;space<=(4-i);space++) 
        {
            printf(" ");
        }
        for (j=1;j<=i;j++) 
        {
            printf("%d ",n);
            n++;
        }
        printf("\n");
    }
    return 0;
}