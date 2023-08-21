#include <stdio.h>
int main()
{
   int i, space, rows, k=0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i=1;i<=rows;i++) 
   {
      for (space=1;space<=rows-i;space++)
      {
        printf(" ");
      }
      for (k=1;k<=2*i-1;k++)
      {
        printf("*");
      }
      printf("\n");
   }
   return 0;
}