#include <stdio.h>
void main()
{
    int x, y, z, temp;
    printf("Enter the values of x, y and z:-\n");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    temp = x;
    x = y;
    y = z;
    z = temp;
    printf("x=%d , y=%d , z=%d", x, y, z);
}