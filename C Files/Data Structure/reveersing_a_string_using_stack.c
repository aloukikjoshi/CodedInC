#include <stdio.h>
#include <string.h>

#define SIZE 1000

char stack[SIZE];
int top = -1;

void push(char c)
{
    if (top == SIZE - 1)
    {
        printf("Stack overflowed!");
    }
    else
    {
        top++;
        stack[top] = c;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack underflowed!");
    }
    else
    {
        printf("%c", stack[top]);
        top--;
    }
}

int main()
{
    char str[SIZE];
    printf("Enter the string:-");
    scanf("%s", str);
    printf("The reversed string is:-");
    for (int i = 0; i < strlen(str); i++)
    {
        push(str[i]);
    }
    for (int i = 0; i < strlen(str); i++)
    {
        pop();
    }
    return 0;
}