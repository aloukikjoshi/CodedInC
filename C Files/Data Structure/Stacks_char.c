#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// N will be the capacity of the Static Stack
#define N 1000

// Initializing the top of the stack to be -1
int top = -1;

// Initializing the stack using an array
char stack[N];

// Function prototypes
void push();    // Push element to the top of the stack
char pop();     // Remove and return the top most element of the stack
char peek();    // Return the top most element of the stack
bool isEmpty(); // Check if the stack is in Underflow state or not
bool isFull();  // Check if the stack is in Overflow state or not
void display(); // Display the values present in stack

int main()
{
    printf("ARRAY (Total Capacity: %d)\n", N);
    int choice;

    while (1)
    {
        printf("\nChoose any of the following options:\n");
        printf(" 0: Exit            1: Push            2: Pop            3: Peek\n");
        printf(" 4: Check if the stack is empty     5: Check if the stack is full\n    6:  Display the stack elements\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            isEmpty();
            break;
        case 5:
            isFull();
            break;
        case 6:
            display();
            break;
        default:
            printf("Please choose a correct option!");
        }
    }
    return 0;
}

void push()
{
    // Checking overflow state
    if (top == N - 1)
        printf("Overflow State: Can't add more elements into the stack\n");
    else
    {
        char x;
        printf("Enter element to be pushed into the stack:-");
        scanf("%s", &x);
        top += 1;
        stack[top] = x;
    }
}

char pop()
{
    // Checking underflow state
    if (top == -1)
        printf("Underflow State: Stack already empty, can't remove any element\n");
    else
    {
        char x = stack[top];
        printf("Popping %c out of the stack\n", x);
        top -= 1;
        return x;
    }
    return -1;
}

char peek()
{
    char x = stack[top];
    printf("%c is the top most element of the stack\n", x);
    return x;
}

bool isEmpty()
{
    if (top == -1)
    {
        printf("Stack is empty: Underflow State\n");
        return true;
    }
    printf("Stack is not empty\n");
    return false;
}

bool isFull()
{
    if (top == N - 1)
    {
        printf("Stack is full: Overflow State\n");
        return true;
    }
    printf("Stack is not full\n");
    return false;
}

void display()
{
    if (top >= 0)
    {
        printf("\n The elements in STACK are:-\n");
        for (int i = top; i >= 0; i--)
        {
            printf("\n%c", stack[i]);
        }
        printf("\n Press Next Choice.");
    }
    else
    {
        printf("\n The STACK is empty.");
    }
}