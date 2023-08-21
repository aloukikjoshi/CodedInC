#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void createFile();
void openFile();
void saveFile();
void exitProgram();

char currentFileContent[1000];

int main()
{
    int choice;
    do
    {
        printf("\nText Editor\n");
        printf("1. Create a new file\n");
        printf("2. Open an existing file\n");
        printf("3. Save changes\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                createFile();
                break;
            case 2:
                openFile();
                break;
            case 3:
                saveFile();
                break;
            case 4:
                exitProgram();
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }
    while (choice != 4);
    return 0;
}

void createFile()
{
    printf("File created.\n");
    strcpy(currentFileContent, "");
}

void openFile()
{
    printf("Enter the content of the file:\n");
    scanf(" %[^\n]s", currentFileContent);
    printf("File opened.\n");
}

void saveFile()
{
    if (strlen(currentFileContent) == 0)
        {
            printf("No file is currently open.\n");
            return;
        }
        printf("File content:\n%s\n", currentFileContent);
}

void exitProgram()
{
    printf("Exiting the program.\n");
    exit(0);
}
