#include <stdio.h>
int main()
{
    int i, j, rows, space = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i=rows; i>0; i--)
    {
        for (j=0; j<i; j++)
        {
            printf("*");
        }
        for (j=0; j<space; j++)
        {
            printf(" ");
        }
        for (j=0; j<i; j++)
        {
            printf("*");
        }
        printf("\n");
        space = space + 2;
    }
    return 0;
}