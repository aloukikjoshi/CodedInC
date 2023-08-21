#include <stdio.h>
int main()
{
    int rows, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    int width = 2 * rows;
    for (i=0; i<=rows; i++)
    {
        for (j=0; j<=i; j++)
        {
            if (j%2==0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
        for (j = 0; j <= width; j++)
        {
            printf(" ");
        }
        width = width - 2;
        for (j = 0; j <= i; j++)
        {
            if (j%2 == 0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }
}