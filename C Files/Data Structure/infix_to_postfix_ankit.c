#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

// Stack implementation
int top = -1;
char stack[MAX_SIZE];

void push(char item)
{
    if (top == MAX_SIZE - 1)
    {
        printf("Stack Overflow\n");
        exit(EXIT_FAILURE);
    }
    stack[++top] = item;
}

char pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        exit(EXIT_FAILURE);
    }
    return stack[top--];
}

char peek()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        exit(EXIT_FAILURE);
    }
    return stack[top];
}

int isOperator(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

int precedence(char op)
{
    if (op == '+' || op == '-')
        return 1;
    else if (op == '*' || op == '/')
        return 2;
    return 0;
}

void infixToPostfix(char *exp)
{
    char postfix[MAX_SIZE];
    int i, k;

    for (i = 0, k = -1; exp[i]; ++i)
    {
        if (isalnum(exp[i]))
            postfix[++k] = exp[i];
        else if (exp[i] == '(')
            push(exp[i]);
        else if (exp[i] == ')')
        {
            while (top != -1 && peek() != '(')
                postfix[++k] = pop();
            if (top == -1 || peek() != '(')
            {
                printf("Invalid expression\n");
                exit(EXIT_FAILURE);
            }
            pop(); // Discard '(' from the stack
        }
        else
        {
            while (top != -1 && precedence(exp[i]) <= precedence(peek()))
                postfix[++k] = pop();
            push(exp[i]);
        }
    }

    while (top != -1)
    {
        if (stack[top] == '(')
        {
            printf("Invalid expression\n");
            exit(EXIT_FAILURE);
        }
        postfix[++k] = pop();
    }

    postfix[++k] = '\0';
    strcpy(exp, postfix);
}

int main()
{
    char exp[MAX_SIZE];

    printf("Enter an infix expression: ");
    fgets(exp, sizeof(exp), stdin);
    exp[strcspn(exp, "\n")] = '\0'; // Remove trailing newline character

    infixToPostfix(exp);
    printf("Postfix expression: %s\n", exp);

    return 0;
}