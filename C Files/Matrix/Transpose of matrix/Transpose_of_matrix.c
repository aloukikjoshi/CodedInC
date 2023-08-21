#include <stdio.h>

int main()
{
	int n;
	printf("Enter the size of the square matrix:-");
	scanf("%d", &n);
	int a[n][n], b[n][n], i, j;
	printf("Enter the array elements:-\n");
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
			b[i][j] = a[j][i];
		}
	}
	printf("The transpose of the matrix is:-\n");
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
}
