#include <stdio.h>
int main()
{
    int action;
    printf("Enter your action (1-3): ");
    scanf("%d", &action);
    if (action==1)
    {
        printf("You found a hidden treasure!");
        }
        else if (action == 2)
        {
            printf("You were surrounded by enemies!");
            }
            else if (action ==3)
            {
                printf("You discovered a secret path!");
                }
                else
                {
                    printf("Invalid action");
                    }
                    return 0;
                    }