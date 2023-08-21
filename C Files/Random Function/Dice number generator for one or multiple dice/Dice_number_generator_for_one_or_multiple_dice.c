#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
printf("Enter the number of dice\n");
int number, i;
scanf("%d", &number);
printf("The values on dice are:-\n");
{
for (i=0 ; i<number ; i++)
printf("%d\n",(rand()%6)+ 1);
}
}