#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int redTime = 15;
    int yellowTime = 5;
    int greenTime = 15;
    int state = 0;
	printf("Red light\n");
	sleep(redTime);
	printf("Yellow light\n");
	sleep(yellowTime);
	printf("Green light\n");
	sleep(greenTime);
    while (1)
	{
        printf("Enter new timers for red, yellow and green lights (in seconds): ");
        scanf("%d %d %d", &redTime, &yellowTime, &greenTime);
        switch (state)
		{
            case 0:
                printf("Red light\n");
                sleep(redTime);
                state = 1;
            case 1:
                printf("Yellow light\n");
                sleep(yellowTime);
                state = 2;
            case 2:
                printf("Green light\n");
                sleep(greenTime);
                state = 0;
        }
    }
    return 0;
}
