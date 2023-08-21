#include<stdio.h>
int main()
{
    int a, b, c, d, m, n;
    float x1, x2;
    printf("The two linear equations having x1 and x2 as unknowns are:-\n");
    printf("ax1 + bx2 = m\ncx1 + dx2 = n\n");
    printf("Enter the values of a, b, c, d, m, n:-\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &m);
    scanf("%d", &n);
    if ((a*d)-(c*d) == 0)
    {
        printf("Unique solution does not exist.");
    }
    else
    {
        x1 = (m*d)-(b*n)/(a*d)-(c*d);
        x2 = (n*a)-(m*c)/(a*d)-(c*d);
        printf("The set of linear equations has a unique solution, where\n");
        printf("x1 = %f\n", x1);
        printf("x2 = %f", x2);
    }
}