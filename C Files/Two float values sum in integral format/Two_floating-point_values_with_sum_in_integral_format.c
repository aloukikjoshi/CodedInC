#include <stdio.h>
int main()
{
    float a, b;
    int c;
    printf("Enter a and b :-\n");
    scanf("%f", &a);
    scanf("%f", &b);
    c = a + b;
    printf("a=%f , b=%f , c=%d", a,b,c);
}