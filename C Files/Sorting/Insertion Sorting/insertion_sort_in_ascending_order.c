#include <stdio.h>

int main ()
{
   int size, i, j, temp;
   printf("Enter the size of array: ");
   scanf("%d", &size);
   int array[size];
   printf("Enter array elements:-\n");
   for (i = 0; i < size; i++)
   {
    scanf("%d", &array[i]);
   }
   for (i = 1; i < size; i++)
   {
      temp = array[i];
      j = i - 1;
      while (j >= 0 && array[j] > temp)
      {
         array[j+1] = array[j];
         j = j - 1;
      } 
      array[j+1] = temp;
   }
   printf("Data items in ascending order: ");
   for (i = 0; i < size; i++)
   {
      printf("%d ", array[i]);
   }
   return 0;
}