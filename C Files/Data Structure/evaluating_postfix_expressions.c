#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX_STACK_SIZE 100

char stack[MAX_STACK_SIZE];
char postfix[MAX_STACK_SIZE];
int top;
int n;

void convertToPostfix(char infix[]);
void push(char symbol);
char pop();
int getPrecedence(char operator);
int isOperator(char symbol);
int isOperand(char symbol);
int evaluatePostfix(char postfix[]);

int main()
{
    top = -1;
    printf("Enter the size of STACK (MAX=100): ");
    scanf("%d", &n);
    printf("Enter a valid infix expression: ");
    char infix[MAX_STACK_SIZE];
    scanf("%s", infix);
    convertToPostfix(infix);
    printf("Postfix expression: %s\n", postfix);
    int result = evaluatePostfix(postfix);
    printf("Result of evaluation of postfix expression: %d\n", result);
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
    if (operator == '^')
        return 3;
    else if (operator == '*' || operator == '/' || operator == '%')
        return 2;
    else if (operator == '+' || operator == '-')
        return 1;
    else
        return 0;
}

int isOperator(char symbol)
{
    return (symbol == '^' || symbol == '*' || symbol == '/' || symbol == '+' || symbol == '-' || symbol == '%');
}

int isOperand(char symbol)
{
    return ((symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z') || (symbol >= '0' && symbol <= '9'));
}

int evaluatePostfix(char postfix[])
{
    int i = 0, x, y, z;

    while (postfix[i] != '\0')
    {
        if (isOperand(postfix[i]))
        {
            push(postfix[i] - '0');
        }
        else if (isOperator(postfix[i]))
        {
            x = pop();
            y = pop();
            
            switch (postfix[i])
            {
                case '^':
                    z = pow(y, x);
                    break;
                case '*':
                    z = y * x;
                    break;
                case '/':
                    z = y / x;
                    break;
                case '+':
                    z = y + x;
                    break;
                case '-':
                    z = y - x;
                    break;
                case '%':
                    z = y % x;
                    break;
                default:
                    printf("Invalid operator\n");
                    return 0;
            }
            push(z);
        }
        i++;
    }
    return pop();
}

