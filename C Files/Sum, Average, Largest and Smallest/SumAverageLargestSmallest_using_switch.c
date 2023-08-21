#include <stdio.h>
#include<stdlib.h>
int main()
{
    int choice, number_1, number_2, number_3, sum, largest, smallest;
    float average;
    printf("Enter the three numbers:-\n");
    scanf("%d", &number_1);
    scanf("%d", &number_2);
    scanf("%d", &number_3);
    while (choice != 0)
    {
        printf("\nChoose among the following to be performed:-\n");
        printf("1. Sum\n2. Average\n3. Largest Number\n4. Smallest Number\n5. Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            sum = number_1 + number_2 + number_3;
            printf("Sum = %d", sum);
            break;
            case 2:
            average = sum / 3;
            printf("Average = %f", average);
            break;
            case 3:
            if (number_1 >= number_2 && number_1 >=number_3)
            {
                printf("%d is the largest number.", number_1);
            }
            if (number_2 >= number_1 && number_2 >= number_3)
            {
                printf("%d is the largest number.", number_2);
            }
            if (number_3 >= number_1 && number_3 >= number_2)
            {
                printf("%d is the largest number.", number_3);
            }
            break;
            case 4:
            if (number_1 <= number_2 && number_1 <=number_3)
            {
                printf("%d is the smallest number.", number_1);
            }
            if (number_2 <= number_1 && number_2 <= number_3)
            {
                printf("%d is the smallest number.", number_2);
            }
            if (number_3 <= number_1 && number_3 <= number_2)
            {
                printf("%d is the smallest number.", number_3);
            }
            break;
            case 5:
            exit(0);
            default:
            printf("Invalid Choice.\n");
        }
    }
}