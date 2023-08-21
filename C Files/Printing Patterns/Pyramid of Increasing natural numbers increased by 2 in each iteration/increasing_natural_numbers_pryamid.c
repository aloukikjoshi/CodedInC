#include <stdio.h>

int main()
{
    int rows, i, j, k, l=1;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = rows-1; j >= i; j--)
        {
            printf(" ");
        }
        for (k = 1; k <= l; k++)
        {
            printf("%d",k);
        }
        l = l + 2;
        printf("\n");
    }
}