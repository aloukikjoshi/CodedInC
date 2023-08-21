#include <stdio.h>

int search(int array[], int size, int key)
{
  for (int j = 0; j < size; j++)
  {
    if (array[j] == key)
    {
      return j;
    }
  }
  return -1;
}

int main()
{
  int size, key;
  printf("Enter the size of array: ");
  scanf("%d", &size);
  int array[size];
  printf("Enter array elements:-\n");
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &array[i]);
  }
  printf("Enter the key to be searched for: ");
  scanf("%d", &key);
  int result = search(array, size, key);
  (result == -1) ? printf("Element not found") : printf("Element found at index: array[%d]", result);
}