#include <stdio.h>
void swap(int a, int b);                        // function declaration
int main()
{
    int a = 10;
    int b = 20;
    printf("\nBefore swap, value of a  :%d", a);
    printf("\nBefore swap, value of b  :%d", b);

    swap(a, b);

    printf("\nAfter swap, value of a  : %d", a);
    printf("\nAfter swap, value of b  :%d", b);
}
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

}
