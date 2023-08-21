#include<stdio.h>
int main()
{
    int n, i;
    float series;
    printf("Enter the value of n:-\n");
    scanf("%d", &n);
    series = 0;
    for (i=1;i<=n;i++)
    {
        series = series + (1.0 / i);
    }
    printf("The sum of the given Harmonic Series for n = %d is %f.", n, series);
    return 0;
}