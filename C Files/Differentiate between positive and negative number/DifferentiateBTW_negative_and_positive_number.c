#include<stdio.h>
int main()
{
    int number;
    do
    {
        printf("Enter the number to be checked:-\n");
        scanf("%d", &number);
        if(number<0)
        {
            printf("Negative.");
        }
        if (number>0)
        {
            printf("Positive.");
        }
    } while (number=0);
    return 0;
}