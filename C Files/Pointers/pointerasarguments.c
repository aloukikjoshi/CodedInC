#include <stdio.h>

void display(void (*p)())
{
    for (int i = 1; i <= 5; i++)
    {
        p(i);
    }
}

void print_numbers(int num)
{
    printf("%d ", num);
}

int main()
{
    void (*p)(int) = &print_numbers; // void function pointer declaration
    printf("The values are :");
    display(p);
    return 0;
}