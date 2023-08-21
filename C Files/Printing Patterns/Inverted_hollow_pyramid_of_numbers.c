#include<stdio.h>

int main()
{
	int i,j,k,l,n=1,rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    int m = (rows-1)*2;
	for(i=1; i<=rows; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d",j);
		}            
		for(k=m; k>=1; k--)            
		{
			printf(" ");
		}
			m = m-2;
		for(l=n; l>=1; l--)
		{
			printf("%d",l);
        }
  		n = n+1;
	    printf("\n");            
       }
       
       return 0; 
}