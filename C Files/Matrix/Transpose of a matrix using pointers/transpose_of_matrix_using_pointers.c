#include <stdio.h>

void transpose(int *matrix, int rows, int cols)
{
    int temp;

    for (int i = 0; i < rows; i++)
    {
        for (int j = i + 1; j < cols; j++)
        {
            // Swap elements using pointer arithmetic
            temp = *(matrix + i * cols + j);
            *(matrix + i * cols + j) = *(matrix + j * cols + i);
            *(matrix + j * cols + i) = temp;
        }
    }
}

void displayMatrix(int *matrix, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", *(matrix + i * cols + j));
        }
        printf("\n");
    }
}

int main()
{
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Original Matrix:\n");
    displayMatrix(&matrix[0][0], rows, cols);

    transpose(&matrix[0][0], rows, cols);

    printf("\nTranspose Matrix:\n");
    displayMatrix(&matrix[0][0], rows, cols);

    return 0;
}