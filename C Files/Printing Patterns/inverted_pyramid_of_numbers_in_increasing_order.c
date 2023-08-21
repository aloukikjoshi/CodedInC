#include <stdio.h>

int main()
{
    int i,j,rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    int space=0;
    
    /*Run parent loop*/
    for(i=rows; i>=1; i--)
    {
        /*Print space*/
        for(j=1; j<=space; j++)
            printf(" ");
        
        
        /*Run loop to print first part of row*/
        for(j=1; j<=i; j++)
            printf("%d",j);
        
        /*Run loop to print second part of row*/
        for(j=i-1; j>=1; j--)
            printf("%d",j);
            
        printf("\n");
        space++;
    }
}