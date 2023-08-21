#include <stdio.h>
int main()
{
    int rows, i, j, k;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i=0; i<rows; i++)
    {
        for (j=0; j<rows-i-1; j++)
        {
            printf(" ");
        }
        for (k=0; k<=i; k++)
        {
            if (k%2==0)
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