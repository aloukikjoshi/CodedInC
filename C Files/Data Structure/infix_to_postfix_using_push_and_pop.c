#include <stdio.h>
#include <string.h>

char stack[100], postfix[100];
int top, n;

void convertToPostfix(char infix[]);
void push(char symbol);
char pop();
int getPrecedence(char operator);
int isOperator(char symbol);
int isOperand(char symbol);

int main()
{
    top = -1;
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d", &n);
    printf("\n\t INFIX TO POSTFIX CONVERSION");
    printf("\n Enter the infix expression:-");
    char infix[100];
    scanf("%s", infix);
    convertToPostfix(infix);
    printf("\n Postfix expression:-%s", postfix);
    return 0;
}

void convertToPostfix(char infix[])
{
    int i, j;
    char symbol;
    j = 0;
    for (i = 0; i < strlen(infix); i++)
    {
        symbol = infix[i];
        if (isOperand(symbol))
        {
            postfix[j] = symbol;
            j++;
        }
        else if (symbol == '(')
        {
            push(symbol);
        }
        else if (isOperator(symbol))
        {
            while (top >= 0 && stack[top] != '(' && getPrecedence(stack[top]) >= getPrecedence(symbol))
            {
                postfix[j] = pop();
                j++;
            }
            push(symbol);
        }
        else if (symbol == ')')
        {
            while (top >= 0 && stack[top] != '(')
            {
                postfix[j] = pop();
                j++;
            }
            pop(); // Discard the '(' from the stack
        }
    }

    while (top >= 0 && stack[top] != '(')
    {
        postfix[j] = pop();
        j++;
    }
    postfix[j] = '\0';
}

void push(char symbol)
{
    if (top == n - 1)
    {
        printf("Stack Overflow\n");
        return;
    }
    top++;
    stack[top] = symbol;
}

char pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return '\0';
    }
    char item = stack[top];
    top--;
    return item;
}

int getPrecedence(char operator)
{
    if (operator== '^')
        return 3;
    else if (operator== '*' || operator== '/' || operator== '%')
        return 2;
    else if (operator== '+' || operator== '-')
        return 1;
    else
        return 0;
}

int isOperator(char symbol)
{
    if (symbol == '^' || symbol == '*' || symbol == '/' || symbol == '+' || symbol == '-' || symbol == '%')
        return 1;
    else
        return 0;
}

int isOperand(char symbol)
{
    if ((symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z'))
        return 1;
    else
        return 0;
}