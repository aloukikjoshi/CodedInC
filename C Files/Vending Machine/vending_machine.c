#include <stdio.h>
#include <time.h>
#include <unistd.h>
int main()
{
    int product,seconds=4;
    int inventory[] = {8, 10, 6};                      // inventory for products A, B, and C
    printf("Welcome! What would you like to take?\n");
    printf("1. Product A - Rs.30\n");
    printf("2. Product B - Rs.40\n");
    printf("3. Product C - Rs.20\n");
    printf("Please Select your product:-\n");
    scanf("%d", &product);
	switch (product)
	{
        case 1:
		    if (inventory[0] > 0)
			{
                printf("Dispensing Product A......\n");
                inventory[0]--;
            }
			else
			{
                printf("Product A is out of stock.\n");
            }
            break;
        case 2:
            if (inventory[1] > 0)
			{
                printf("Dispensing Product B......\n");
                inventory[1]--;
            }
			else
			{
                printf("Product B is out of stock.\n");
            }
            break;
        case 3:
            if (inventory[2] > 0)
			{
                printf("Dispensing Product C......\n");
                inventory[2]--;
            }
			else
			{
                printf("Product C is out of stock.\n");
            }
            break;
        default:
        	{
			printf("Invalid selection.\n");
			}
	}
	sleep(seconds);
	printf("Current inventory:-\n");
    printf("Product A: %d\n", inventory[0]);
    printf("Product B: %d\n", inventory[1]);
    printf("Product C: %d\n", inventory[2]);
	return 0;
}
