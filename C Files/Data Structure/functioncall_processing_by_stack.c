#include <stdio.h>

#define MAX_STACK_SIZE 100

// Stack implementation
int stack[MAX_STACK_SIZE];
int top = -1;

void push(int value)
{
    if (top == MAX_STACK_SIZE - 1)
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

// Functions to be called
int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    if (b == 0)
    {
        printf("Error: Division by zero!\n");
        return -1;
    }

    return a / b;
}

// Main program
int main()
{
    int result;

    // Function call 1: add(5, 3)
    push(5);
    push(3);
    result = add(pop(), pop());
    printf("Result of add(5, 3): %d\n", result);

    // Function call 2: subtract(10, 4)
    push(10);
    push(4);
    result = subtract(pop(), pop());
    printf("Result of subtract(10, 4): %d\n", result);

    // Function call 3: multiply(6, 2)
    push(6);
    push(2);
    result = multiply(pop(), pop());
    printf("Result of multiply(6, 2): %d\n", result);

    // Function call 4: divide(20, 5)
    push(20);
    push(5);
    result = divide(pop(), pop());
    printf("Result of divide(20, 5): %d\n", result);

    return 0;
}

/*EXPLANATION*/
/*In this program, the stack is implemented as an array stack with a maximum size defined by MAX_STACK_SIZE. The stack is used to pass arguments to functions and retrieve their return values. The push function is used to add elements to the stack, and the pop function is used to retrieve elements from the stack.
The program demonstrates four function calls: add(5, 3), subtract(10, 4), multiply(6, 2), and divide(20, 5). Each function call is performed by pushing the arguments onto the stack and then retrieving them in reverse order using pop. The result of each function call is printed to the console.
Note that this approach is not as flexible or efficient as using pointers or structures, especially for handling complex data structures. However, for simple function calls with basic data types, it can serve as a workaround.*/