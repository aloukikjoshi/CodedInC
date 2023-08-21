#include <stdio.h>

int main()
{
    int i, j, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    char ch = 'A';
    int space = rows - 1;
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= space; j++)
        {
            printf("  ");
        }
        for (j = ch; j >= 'A'; j--)
        {
            printf("%c ", j);
        }
        for (j = 'B'; j <= ch; j++)
        {
            printf("%c ", j);
        }
        printf("\n");
        ch++;
        space--;
    }
    return 0;
}
