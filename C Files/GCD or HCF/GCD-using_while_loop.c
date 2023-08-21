#include <stdio.h>
int main()
{
    int number_1, number_2;
    printf("Enter the two numbers :-\n");
    scanf("%d", &number_1);
    scanf("%d", &number_2);
    while (number_2!=0) {
        if (number_1>number_2) {
            number_1 = number_1-number_2;
        } else {
            number_2 = number_2-number_1;
        }
    }
    printf("GCD = %d", number_1);
    return 0;
}