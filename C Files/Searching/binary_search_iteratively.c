#include <stdio.h>

int main()
{
   int c, j, temp, first, last, middle, size, search_key;
   printf("Enter number of elements: ");
   scanf("%d",&size);
   int array[size];
   printf("Enter elements of the array:\n");
   for (c = 0; c < size; c++)
   {
      scanf("%d",&array[c]);
   }
   for (c = 0; c < size - 1; c++)
    {
        for (j = 0; j < size - c - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    printf("The ascending order of the given array is: ");
   for (c = 0; c < size; c++)
   {
      printf("%d ", array[c]);
   }
   printf("\nEnter the value to find: ");
   scanf("%d", &search_key);
   first = 0;
   last = size - 1;
   middle = (first+last)/2;
   while (first < last)
   {
      if (array[middle] < search_key)
      {
         first = middle + 1;
      }
      else if (array[middle] == search_key)
      {
         printf("\n%d is present at index array[%d].\n", search_key, middle);
         break;
      }
      else
      {
         last = middle - 1;
      }
      middle = (first + last)/2;
   }
   if (first > last)
   {
      printf("\nNot found! %d is not present in the list.\n", search_key);
   }
   return 0;  
}