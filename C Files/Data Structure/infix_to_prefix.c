#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

int isOperator(char ch);
int precedence(char ch);
void push(char item);
char pop();
void infixToPrefix(char infix[], char prefix[]);

int main()
{
    char infix[MAX], prefix[MAX];
    printf("Enter an infix expression: ");
    fgets(infix, MAX, stdin);
    infix[strlen(infix) - 1] = '\0';
    infixToPrefix(infix, prefix);
    printf("Prefix expression: %s\n", prefix);
    return 0;
}

int isOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^' || ch == '%')
        return 1;
    return 0;
}

int precedence(char ch)
{
    if (ch == '^')
        return 3;
    else if (ch == '*' || ch == '/' || ch == '%')
        return 2;
    else if (ch == '+' || ch == '-')
        return 1;
    else
        return 0;
}

void push(char item)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = item;
}

char pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

void infixToPrefix(char infix[], char prefix[])
{
    int i, j = 0;
    char ch, temp;
    for (i = strlen(infix) - 1; i >= 0; i--)
    {
        ch = infix[i];
        if (isOperator(ch))
        {
            while (top != -1 && precedence(stack[top]) > precedence(ch))
            {
                prefix[j++] = pop();
            }
            push(ch);
        }
        else if (ch == ')')
        {
            push(ch);
        }
        else if (ch == '(')
        {
            while ((temp = pop()) != ')')
            {
                prefix[j++] = temp;
            }
        }
        else
        {
            prefix[j++] = ch;
        }
    }
    while (top != -1)
    {
        prefix[j++] = pop();
    }
    prefix[j] = '\0';
    // Reverse the prefix expression
    int len = strlen(prefix);
    for (i = 0; i < len / 2; i++)
    {
        temp = prefix[i];
        prefix[i] = prefix[len - i - 1];
        prefix[len - i - 1] = temp;
    }
}