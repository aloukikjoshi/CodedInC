#include <stdio.h>
int main()
{
int n;
printf("Level of severity level\n");
scanf("%d", &n);
if (n==5)
{
printf("Emergency");
}
else if (n==4)
{
printf("Severe");
}
else if (n==3)
{
printf("High");
}
else if (n ==2)
{
printf("Medium");
}
else if (n==1)
{
printf("Low");
}
}