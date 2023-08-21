#include <stdio.h>
int main()
{
    int n, i, j;
    int is_identity = 1; // Assume the matrix is an identity matrix by default
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) // pushing values into array
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    // Check if the matrix is an identity matrix
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j && matrix[i][j] != 1)
            {
                // diagonal elements should be 1
                is_identity = 0;
                break;
            }
            else if (i != j && matrix[i][j] != 0)
            {
                // off-diagonal elements should be 0
                is_identity = 0;
                break;
            }
        }
        if (is_identity == 0)
        {
            break;
        }
    }
    /*end of loop*/
    if (is_identity == 1)
    {
        printf("The given matrix is an identity matrix.\n");
    }
    else
    {
        printf("The given matrix is not an identity matrix.\n");
    }
    return 0;
}