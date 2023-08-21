#include <stdio.h>                           //Preprocessor Commands

int main()                                   //Main Function
{
    int count = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (i%2 != 0 && i%3 != 0)
        {
            printf("%d", i);
            count++; 
        }
    }
    printf("\n%d numbers are present between 1 and 100 which aren't divisible by 2 or 3.", count);
    return 0;
}