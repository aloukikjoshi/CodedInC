#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a,b,i,j;
    float c,d,p,q;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    i=a+b;
    j=a-b;
    p=c+d;
    q=c-d;
    printf("%d %d\n",i,j);
    printf("%.1f %.1f",p,q);
    return 0;
}