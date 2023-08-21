#include <stdio.h>
int main()
{
    int Time, Charges, distance, value;
    printf("Enter shipping distance (in km): ");
    scanf("%d" , &distance);
    printf("Enter order value (in INR): ");
    scanf("%d" , &value);
    {
        if (value > 500)
        {
            printf("No shipping Charges.\n");
            }
            else if (value < 500 && distance <= 100)
            {
                printf("%s, %s","Charges = 90", "Time = within 24 hours.\n");
                }
                else if (value < 500 && distance <= 250)
                {
                    printf("%s, %s","Charges = 90", "Time = within 36 hours.\n");
                    }
                    else if (value < 500 && distance <= 500)
                    {
                        printf("%s, %s","Charges = 90", "Time = within 48 hours.\n");
                        }
                        else if (value < 500 && distance <= 1000)
                        {
                            printf("%s, %s","Charges = 90", "Time = within 54 hours.\n");
                            }
                            else if (value < 500 && distance <= 2500)
                            {
                                printf("%s, %s","Charges = 90", "Time = within 4 days.\n");
                                }
                                else
                                {
                                    printf("%s, %s","Charges = 90", "Time = minimum one week.\n");
                                    }
    }
    printf("The Charges are in INR.");
    return 0;
}