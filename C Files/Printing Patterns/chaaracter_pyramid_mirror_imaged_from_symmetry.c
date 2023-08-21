#include <stdio.h>

int main()
{
    int i,j,rows;
    char CH='A';
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    int space=rows-1;
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=space; j++)
            printf(" ");
        
        
        /*Run loop to print first part of row*/
        for(j=1; j<=i; j++)
            printf("%c",CH+j-1);
        
        /*Run loop to print second part of row*/
        for(j=i-1; j>=1; j--)
            printf("%c",CH+j-1);
            
        printf("\n");
        space--;
    }

    return 0;
}
