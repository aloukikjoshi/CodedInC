#include <stdio.h>       
#include <math.h>

int fact(int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}

int main()
{
    int x, n;
    printf("Enter the angle in radian: ");
    scanf("%d", &x);
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int sign = -1;
    float sum1 = 0, sum2 = 0, sum3 = 0;
    for (int i = 0; i <= n-1; i++)
    {
        sign = -1*sign;
        sum1 += (sign*pow(x,2*i+1))/fact(2*i+1);
        sum2 += (sign*pow(x,2*i))/fact(2*i);
        sum3 += pow((1.0/i),i);
    }
    printf("sin %d = %.2f\ncos %d = %.2f\nsum = %.2f", x, sum1, x, sum2, sum3);
    return 0;
}