#include<stdio.h>

int main()
{
	// initializing the 3-dimensional array
	int x[2][3][2] =
	{
		{ {0,1}, {2,3}, {4,5} },
		{ {6,7}, {8,9}, {10,11} }
	};

	// output each element's value
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			for (int k = 0; k < 2; ++k)
			{
				printf("\nElement at x[%d][%d][%d] = %d",i,j,k, x[i][j][k]);
			}
		}
	}
	return 0;
}
