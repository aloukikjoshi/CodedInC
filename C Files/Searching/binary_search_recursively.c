#include <stdio.h>
#include <math.h>

int binary_search(int array[], int low, int high, int key)
{
    if (low <= high)
    {
        int mid = low + (high - low) / 2; // Calculate mid using this formula to avoid integer overflow
        if (array[mid] == key)
        {
            return mid;
        }
        else if (key > array[mid])
        {
            return binary_search(array, mid + 1, high, key);
        }
        else
        {
            return binary_search(array, low, mid - 1, key);
        }
    }
    return -1; // Return -1 if the key is not found
}

int main()
{
    int size, i, key;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int array[size];
    printf("Enter the array elements:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    // Sorting the array using Bubble Sort
    for (i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\nEnter the element to be searched: ");
    scanf("%d", &key);
    int index = binary_search(array, 0, size - 1, key);
    if (index != -1)
    {
        printf("The key found at index array[%d].", index);
    }
    else
    {
        printf("The key not found.");
    }

    return 0;
}