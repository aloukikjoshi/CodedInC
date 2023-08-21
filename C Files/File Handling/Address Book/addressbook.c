#include <stdio.h>
#include <string.h>
typedef struct {
    char name[50];
    char phone[15];
    char email[50];
} Address;

void addnewcontact() {
    Address contact;
    printf("Enter name: ");
    scanf(" %[^\n]", contact.name);
    printf("Enter phone number: ");
    scanf(" %[^\n]", contact.phone);
    printf("Enter email: ");
    scanf(" %[^\n]", contact.email);
    FILE *file;
	file = fopen("address.txt", "a");
    if (file == NULL) {
        printf("Error ocured in opening file.\n");
        return;
    }
    fwrite(&contact, sizeof(Address), 1, file);
    fclose(file);
    printf("Contact added successfully.\n");
}
void searchcontact() {
    char name[50];
    printf("Enter name you want to search: ");
    scanf(" %[^\n]", name);
    FILE *file;
	file = fopen("address.txt", "r");
    if (file == NULL) {
        printf("Error ocured in opening file.\n");
        return;
    }
    Address contact;
    int found = 0;
    while (fread(&contact, sizeof(Address), 1, file)) {
        if (strcmp(contact.name, name) == 0) {
            found = 1;
            printf("Contact Found:\n");
        	printf("-------------------\n");
            printf("Name: %s\n", contact.name);
            printf("Phone: %s\n", contact.phone);
            printf("Email: %s\n", contact.email);
            break;
        }
    }
    fclose(file);
    if (!found) {
        printf("Contact not found.\n");
    }
}
void displaycontacts() {
    FILE *file;
	file = fopen("address.txt", "r+");
    if (file == NULL) {
        printf("Error ocured in opening file.\n");
        return;
    }
    Address contact;
    printf("All Contacts:\n");
    printf("-------------------\n");
    while (fread(&contact, sizeof(Address), 1, file)) {
        printf("Name: %s\n", contact.name);
        printf("Phone: %s\n", contact.phone);
        printf("Email: %s\n", contact.email);
        printf("-------------------\n");
    }
    fclose(file);
}

int main() {
    int choice;
    do {
        printf("!!!Welcome to Address Book Management System!!!\n");
        printf("1. Add a New Contact\n");
        printf("2. Search for a Contact by name\n");
        printf("3. Display All Contacts\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addnewcontact();
                break;
            case 2:
                searchcontact();
                break;
            case 3:
                displaycontacts();
                break;
            case 4:
                printf("Exiting the program!!!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
        printf("\n");
    } while (choice != 4);
    return 0;
}