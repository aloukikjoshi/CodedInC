#include <stdio.h>
int main()
{
 int number, i, r;
 printf("Enter the number to be checked\n");
 scanf("%d", &number);
 r=0;
 for(i=1; i<=number; i++)
 {
  if(number % i == 0)
   r++;
 }
 if(r > 2)
  printf("%d is a composite number.", number);
 else
  printf("%d is not a composite number.", number);
 return 0;
}