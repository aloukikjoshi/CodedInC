#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 100

bool is_empty(int top)
{
    return top == -1;
}

bool is_full(int top)
{
    return top == STACK_SIZE - 1;
}

int push(char stack[], int top, char symbol)
{
    if (is_full(top))
    {
        printf("Error: Stack is full\n");
        return top;
    }
    stack[top + 1] = symbol;
    return top + 1;
}

char pop(char stack[], int top)
{
    if (is_empty(top))
    {
        printf("Error: Stack is empty\n");
        return '\0';
    }
    return stack[top];
}

bool is_balanced(const char symbols[])
{
    char stack[STACK_SIZE];
    int top = -1;

    for (int i = 0; symbols[i] != '\0'; i++)
    {
        if (symbols[i] == '(' || symbols[i] == '[' || symbols[i] == '{')
        {
            if (is_full(top))
            {
                printf("Error: Stack is full\n");
                return false;
            }
            top = push(stack, top, symbols[i]);
        }
        else if (symbols[i] == ')' || symbols[i] == ']' || symbols[i] == '}')
        {
            if (is_empty(top))
            {
                return false;
            }
            char topSymbol = pop(stack, top);
            if ((symbols[i] == ')' && topSymbol != '(') ||
                (symbols[i] == ']' && topSymbol != '[') ||
                (symbols[i] == '}' && topSymbol != '{'))
            {
                return false;
            }
            top--;
        }
    }
    return is_empty(top);
}

int main()
{
    char input[STACK_SIZE];
    printf("Enter the expression:-");
    fgets(input, STACK_SIZE, stdin);

    if (is_balanced(input))
    {
        printf("The symbols are balanced.\n");
    }
    else
    {
        printf("The symbols are not balanced.\n");
    }
    return 0;
}