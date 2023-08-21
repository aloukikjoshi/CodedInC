#include <stdio.h>

#define SIZE 100

int stack[SIZE];
int top = -1;

void push(int value)
{
    if (top == SIZE - 1)
    {
        printf("Stack overflow!\n");
        return;
    }
    stack[++top] = value;
}

int pop()
{
    if (top == -1)
    {
        printf("Stack underflow!\n");
        return -1;
    }
    return stack[top--];
}

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int result, a, b;
    printf("Enter the values of a & b:-\n");
    scanf("%d %d", &a, &b);
    push(a);
    push(b);
    result = add(pop(), pop());
    printf("Result of add(%d, %d): %d\n", a, b, result);
    return 0;
}