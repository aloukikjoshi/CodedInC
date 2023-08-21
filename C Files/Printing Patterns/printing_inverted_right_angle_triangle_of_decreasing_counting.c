#include <stdio.h>
int main()
{
    int i, j, rows;
    printf("Enter the number of rows in the triangle:-\n");
    scanf("%d", &rows);
    for (i = rows; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}