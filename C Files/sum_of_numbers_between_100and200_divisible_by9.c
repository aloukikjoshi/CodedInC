#include<stdio.h>                 //preprocessor commands

int main()                        //Main Function
{
    int sum=0,i,m=100,n=200;
    for (i=m;i<=n;i++)
    {
        if (i%9==0)
        {
            sum=sum+i;
        }
    }
    printf("Sum = %d", sum);       //Result
}