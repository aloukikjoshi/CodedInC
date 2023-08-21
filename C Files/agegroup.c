#include <stdio.h>                          //preprocessor command

int main()                                  //Main Function
{
    int age, count = 0;
    for (int i = 1; i <= 100; i++) 
    {
        printf("Enter age of person %d: ", i);
        scanf("%d", &age);
        if (age < 50 || age > 60) 
        {
            continue;                       //continues the for loop without moving to the next steps
        }
        else
        {
            count++;
        }
    }
    printf("\nThe number of persons in the age group 50 to 60 are %d", count);
    return 0;
}