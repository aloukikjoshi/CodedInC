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

void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        newNode->next = *head;
        *head = newNode;
    }
    printf("Inserted %d at the beginning\n", data);
}

void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    printf("Inserted %d at the end\n", data);
}

void insertAtPosition(struct Node** head, int data, int position) {
    if (position <= 0) {
        printf("Invalid position.\n");
        return;
    }
    if (position == 1 || *head == NULL) {
        insertAtBeginning(head, data);
    } else {
        struct Node* newNode = createNode(data);
        struct Node* temp = *head;
        int count = 1;
        while (temp != NULL && count < position - 1) {
            temp = temp->next;
            count++;
        }
        if (temp == NULL) {
            printf("Invalid position.\n");
            return;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        printf("Inserted %d at position %d\n", data, position);
    }
}

void deleteFromBeginning(struct Node** head) {
    if (*head == NULL) {
        printf("The list is empty. Nothing to delete.\n");
        return;
    }
    struct Node* temp = *head;
    *head = (*head)->next;
    printf("Deleted %d from the beginning\n", temp->data);
    free(temp);
}

void deleteFromEnd(struct Node** head) {
    if (*head == NULL) {
        printf("The list is empty. Nothing to delete.\n");
        return;
    }
    if ((*head)->next == NULL) {
        printf("Deleted %d from the end\n", (*head)->data);
        free(*head);
        *head = NULL;
        return;
    }
    struct Node* temp = *head;
    struct Node* prev = NULL;
    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    printf("Deleted %d from the end\n", temp->data);
    free(temp);
}

void deleteFromPosition(struct Node** head, int position) {
    if (position <= 0) {
        printf("Invalid position.\n");
        return;
    }
    if (position == 1) {
        deleteFromBeginning(head);
    } else {
        struct Node* temp = *head;
        struct Node* prev = NULL;
        int count = 1;
        while (temp != NULL && count < position) {
            prev = temp;
            temp = temp->next;
            count++;
        }
        if (temp == NULL) {
            printf("Invalid position.\n");
            return;
        }
        prev->next = temp->next;
        printf("Deleted %d from position %d\n", temp->data, position);
        free(temp);
    }
}

void displayList(struct Node* head) {
    if (head == NULL) {
        printf("The list is empty.\n");
    } else {
        struct Node* temp = head;
        printf("Linked List: ");
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main() {
    struct Node* head = NULL;
    int choice, data, position;
    do {
        printf("\n1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Position\n");
        printf("4. Delete from Beginning\n");
        printf("5. Delete from End\n");
        printf("6. Delete from Position\n");
        printf("7. Display List\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter data to insert at the beginning: ");
                scanf("%d", &data);
                insertAtBeginning(&head, data);
                break;
            case 2:
                printf("Enter data to insert at the end: ");
                scanf("%d", &data);
                insertAtEnd(&head, data);
                break;
            case 3:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                printf("Enter position: ");
                scanf("%d", &position);
                insertAtPosition(&head, data, position);
                break;
            case 4:
                deleteFromBeginning(&head);
                break;
            case 5:
                deleteFromEnd(&head);
                break;
            case 6:
                printf("Enter position to delete: ");
                scanf("%d", &position);
                deleteFromPosition(&head, position);
                break;
            case 7:
                displayList(head);
                break;
            case 8:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 8);
    return 0;
}
