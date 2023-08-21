#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c;  //a, b and c are the sides of triangle
    printf("Enter the values of a, b and c:-\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (pow(a,2)==pow(b,2)+pow(c,2))
    {
        printf("The triangle is a right angled triangle with a = hypotenuse.");
    }
    else if (pow(b,2)==pow(a,2)+pow(c,2))
    {
        printf("The triangle is a right angled triangle with b = hypotenuse.");
    }
    else if (pow(c,2)==pow(b,2)+pow(a,2))
    {
        printf("The triangle is a right angled triangle with c = hypotenuse.");
    }
    else
    {
        printf("The triangle isn't a right angled triangle.");
    }
}