#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int game(char user, char computer);
int main()
{
    unsigned int a, round = 1;
    char user, computer, result;
    srand(time(NULL));
    do
	{
        a = (rand() % 3) + 1;
        switch (a)
        {
        case 1:
            {
                computer = 'r';
                break;
            }
        case 2:
            {
                computer = 'p';
                break;
            }
        case 3:
            {
                computer = 's';
                break;
            }
        }
        printf("Round %d\n", round);
        printf("Enter your choice:-\n'r' for rock\n'p' for paper\n's' for scissor\nFor exiting the game press 'e'.\n");
        scanf(" %c", &user);
        if (user == 'e')
        {
            printf("Exiting the game...\n");
            break;
        }
        result = game(user, computer);
        switch (result)
        {
        case -1:
            {
                printf("It's a tie! Game Draw.\n");
                break;
            }
        case 0:
            {
                printf("Poor Luck! You lost the game. Better luck next time.\n");
                break;

            }
        case 1:
            {
                printf("Congratulations! You have won the game.\n");
                break;
            }
        }
        round++;
    }
	while (user != 'e');
    return 0;
}

int game(char user, char computer)
{
    if (user == computer)
    {
        return -1;
    }
    switch (user)
    {
    case 'r':
        switch (computer)
        {
        case 'p':
            {
                return 0;
            }
        case 's':
            {
                return 1;
            }
        }
        break;
    case 'p':
        switch (computer)
        {
        case 'r':
            {
                return 1;
            }
        case 's':
            {
                return 0;
            }
        }
        break;
    case 's':
        switch (computer)
        {
        case 'r':
            {
                return 0;
            }
        case 'p':
            {
                return 1;
            }
        }
        break;
    }
}
