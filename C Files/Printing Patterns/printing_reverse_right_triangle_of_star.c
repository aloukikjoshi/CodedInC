#include <stdio.h>
int main()
{
    int i, j, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = rows; i >= 0; i--)
    {
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}