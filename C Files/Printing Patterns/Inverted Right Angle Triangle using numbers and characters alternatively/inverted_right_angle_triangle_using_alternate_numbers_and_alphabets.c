#include <stdio.h>

int main()
{
    int i,j,k,rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for(i=rows; i>=1; i--)
    {
        for(j=1, k='A'; j<=i; j++,k++)
        {
            printf("%d%c",j,k);
        }  
        printf("\n");
    }
    return 0;
}
