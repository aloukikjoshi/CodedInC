#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int isEmpty(struct Node* top) {
    return (top == NULL);
}

void push(struct Node** top, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *top;
    *top = newNode;
    printf("Pushed %d onto the stack\n", data);
}

int pop(struct Node** top) {
    if (isEmpty(*top)) {
        printf("Stack underflow!\n");
        return -1;
    }
    struct Node* temp = *top;
    int data = temp->data;
    *top = temp->next;
    free(temp);
    printf("Popped %d from the stack\n", data);
    return data;
}

int peek(struct Node* top) {
    if (isEmpty(top)) {
        printf("Stack is empty!\n");
        return -1;
    }
    return top->data;
}

void displayStack(struct Node* top) {
    if (isEmpty(top)) {
        printf("Stack is empty!\n");
        return;
    }
    printf("Stack: ");
    struct Node* temp = top;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node* top = NULL;

    push(&top, 3);
    push(&top, 2);
    push(&top, 4);
    displayStack(top);

    int poppedElement = pop(&top);
    printf("Popped element: %d\n", poppedElement);
    displayStack(top);

    int topElement = peek(top);
    printf("Top element: %d\n", topElement);

    return 0;
}