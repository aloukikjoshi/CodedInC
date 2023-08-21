#include<stdio.h>
int main()
{
	int m,n,i,j,c;
	printf("Enter no of rows: ");
	scanf("%d",&m);
	printf("\nEnter no of columns: ");
	scanf("%d",&n);
	int a[m][n];
	if(m==n)
	{
		printf("\nEnter matrix elements: \n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		c=0;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i][j]!=a[j][i])
				{
					c=1;
				}
			}
		}
		if(c!=0)
		{
			printf("The given matrix is not symmetric.");
		}
		else
		{
			printf("The given matrix is symmetric.");
	    }
    }
    else 
    {
    	printf("The given matrix size does not matches square matrix property.");
	}
	return 0;
}