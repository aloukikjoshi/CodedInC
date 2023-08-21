#include <stdio.h>

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int array[], int size)
{
    int i, j, max_idx;
    for (i = 0; i < size - 1; i++)
    {
        max_idx = i;
        for (j = i + 1; j < size; j++)
        {
            if (array[j] > array[max_idx])
            {
                max_idx = j;
            }
        }
        swap(&array[max_idx], &array[i]);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int array[size];
    printf("Enter the elements of the array:\n");
    for (int s = 0; s < size; s++)
    {
        scanf("%d", &array[s]);
    }
    selectionSort(array, size);
    printf("Sorted array in descending order: ");
    printArray(array, size);
    return 0;
}