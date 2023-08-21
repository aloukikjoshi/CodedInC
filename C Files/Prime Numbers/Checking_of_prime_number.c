#include<stdio.h>
int main()
{
    int number, i, counter;
    printf("Enter the number to be checked:-");
    scanf("%d", &number);
    i = 1;
    counter = 0;
    for (i = 1;i <= number; i++)
    {
        if (number % i == 0)
        {
            counter++; 
        }
    }
    if (counter == 2)
    {
        printf("The given number is a prime number.");
    }
    else
    {
        printf("The given number is not a prime number.");
    }
}