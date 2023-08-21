#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
    int random_number;
    printf("Enter lower limit and upper limit:-\n");
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    srand(time(NULL));
    random_number=(rand()%(m-n+1))+n;
    printf("Enter a guess for the number between %d and %d \n", n, m);
    int user_guess, tries=1;
    do{
        scanf("%d", &user_guess);
        if (user_guess>random_number)
        {
            printf("The number you entered is greater.\n");
            tries++;
        }
        else if (user_guess<random_number)
        {
            printf("The number your entered is smaller.\n");
        tries++;
        }
        else
        {printf("Correct guess, you won in %d tries!", tries);
    }
}
while (user_guess!=random_number);
}