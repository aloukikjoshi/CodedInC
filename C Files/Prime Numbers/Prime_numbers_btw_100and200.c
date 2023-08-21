#include<stdio.h>
int main()
{
    int j, i, k, counter;
    counter = 0;
    i = 101;
    while (i<200)
    {
        j = 0;
        for (k = 1; k<=i; k++)
        {
            if (i%k == 0)
            {
                j++;
            }
        }
        if (j == 2)
        {
            counter++;
        }    
        i++;
    }
    printf("The number of prime numbers between 100 and 200 are %d.", counter);
    return 0;
}