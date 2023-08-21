#include <stdio.h>
int main()
{
    int number_1, number_2, i, GCD;
    printf("Enter the two numbers:-\n");
    scanf("%d", &number_1);
    scanf("%d", &number_2);
    for (i = 1; i <= number_1 && i <= number_2; i++)
    {
        if ( number_1 % i == 0 && number_2 % i == 0)
        GCD = i;
    }
    printf("GCD = %d", GCD);
    return 0;
}