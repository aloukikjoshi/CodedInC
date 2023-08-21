#include <stdio.h>
int main()
{
  int key, size, i, j, found = 0;
  printf("Enter the size of array: ");
  scanf("%d", &size);
  int array[size];
  printf("Enter the array elements:-\n");
  for(i = 0; i < size; i++)
  {
    scanf("%d", &array[i]);
  }
  printf("Enter a number to be search: ");
  scanf("%d", &key);
  for (j = 0; j < size; j++)
  {
    if (array[j] == key)
    {
      printf("%d is present at location array[%d].\n", key, j);
      found = 1;
      break;
    }
  }
  if (found == 0)
  {
    printf("%d isn't present in the array.\n", key);
  }
  return 0;
}