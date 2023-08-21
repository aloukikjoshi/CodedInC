#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c;
    float x1, x2, x, D;
    printf("Enter the value of a, b nad c for the quadratic equation ax^2+bx+c=0.\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    D = pow(b,2)-4*a*c;
    if (a == 0 && b == 0)
    {
        printf("No Solution.");
    }
    else if (a == 0)
    {
        x = (-c/b);
        printf("There exist only one root, x=%f.", x);
    }
    else if (D < 0)
    {
        printf("There are no real roots.");
    }
    else
    {
        x1 = (-b + pow(D,1/2))/2*a;
        x2 = (-b - pow(D,1/2))/2*a;
        printf("There are real roots:-");
        printf("x1 = %f", x1);
        printf("x2 = %f", x2);
    }
}