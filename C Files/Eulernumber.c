#include <stdio.h>                           //Preprocessor Commands

int factorial(int n);                        //Function Prototyping

int main()                                   //Main Function
{
    double e = 1;
    int n;
    printf("Enter a value for n: ");         //Asking for the value of n to the user 
    scanf("%d", &n);                         /*Scanning the value of n*/
    for (int i = 1; i <= n; i++)
    {
        e += 1.0 / factorial(i);             //Calling the function
    }
    printf("e = %lf", e);                    //Printing the result
    return 0;
}

int factorial(int n)                         //Function to calculate factorial
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}