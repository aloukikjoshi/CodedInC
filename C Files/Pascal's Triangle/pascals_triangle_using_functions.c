//Pascal Triangle program in C
#include <stdio.h>
int fact(int n)                           //function to calculate factorial of a number
{
  int a;
  for (a = 1; n > 1; n--)
  {
  	a *= n;
  }
  return a;
}

int combination(int n, int r)
{
  return fact(n) / (fact(n - r) * fact(r)); // using the mathematical formula of combination nCr
}

int main()
{
  int rows;
  int i, j;
  printf("Enter Number of Rows: ");         //number of rows of pascal's triangle to be printed
  scanf("%d", &rows);

  for (i = 0; i <= rows; i++)
  {
    for (j = 0; j <= rows - i; j++)
    {
    	printf("  ");
	}
    for (j = 0; j <= i; j++)
    {
    	printf(" %3d", combination(i, j));
	}
    printf("\n");
  }
  return 0;
}
