#include <stdio.h>
int main()
{
    int number_1, number_2, number_3, sum, largest_number, smallest_number;
    float average;
    printf("Enter the three numbers:-\n");
    scanf("%d", &number_1);
    scanf("%d", &number_2);
    scanf("%d", &number_3);
    sum = number_1 + number_2 + number_3;
    printf("Sum = %d", sum);
    average = sum / 3;
    printf("\nAverage = %f", average);
    printf("\n");
    {
        if (number_1>=number_2 && number_1>=number_3)
        {
            printf("%d is the largest number.\n", number_1);
        }
        if (number_2>=number_1 && number_2>=number_3)
        {
            printf("%d is the largest number.\n", number_2);
        }
        if (number_3>=number_1 && number_3>= number_2)
        {
            printf("%d is the largest number.\n", number_3);
        }
    }
    {
        if (number_1<=number_2 && number_1<=number_3)
        {
            printf("%d is the smallest number.", number_1);
        }
        if (number_2<=number_1 && number_2<=number_3)
        {
            printf("%d is the smallest number.", number_2);
        }
        if (number_3<=number_1 && number_3<= number_2)
        {
            printf("%d is the smallest number.", number_3);
        }
    }
}