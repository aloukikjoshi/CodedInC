#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

typedef struct
{
    char name[MAX];
    int aadhar_number;
    int mobile_number;
    float total_bill;
} Customer;

void add_record()
{
    Customer record;
    printf("Enter the name of the customer:\n");
    scanf("%s", record.name);
    printf("Enter the Aadhar number of the customer:\n");
    scanf("%d", &record.aadhar_number);
    printf("Enter the mobile number of the customer:\n");
    scanf("%d", &record.mobile_number);
    printf("Enter the total number of units:\n");
    scanf("%d", &record.total_bill);

    if (record.total_bill < 100)
    {
        record.total_bill = record.total_bill * 0.75;
    }
    else if (record.total_bill >= 100 && record.total_bill < 200)
    {
        record.total_bill = record.total_bill * 1.50;
    }
    else
    {
        record.total_bill = record.total_bill * 3;
    }

    printf("Total Bill: %f\n", record.total_bill);

    FILE *file = fopen("electricity.txt", "a+");
    if (file == NULL)
    {
        printf("File not found\n");
        return;
    }

    fprintf(file, "%s %d %d %f\n", record.name, record.aadhar_number, record.mobile_number, record.total_bill);
    fclose(file);
}

void display_records()
{
    Customer record;
    FILE *file = fopen("electricity.txt", "r");
    if (file == NULL)
    {
        printf("Error. File doesn't exist.\n");
        return;
    }

    while (fscanf(file, "%s %d %d %f", record.name, &record.aadhar_number, &record.mobile_number, &record.total_bill) != EOF)
    {
        printf("Name: %s\n", record.name);
        printf("Aadhar Number: %d\n", record.aadhar_number);
        printf("Mobile Number: %d\n", record.mobile_number);
        printf("Total Bill: %f\n\n", record.total_bill);
    }

    fclose(file);
}

void search()
{
    int num;
    printf("Enter the mobile number of the customer to be searched:\n");
    scanf("%d", &num);

    Customer record;
    int found = 0;
    FILE *file = fopen("electricity.txt", "r");
    if (file == NULL)
    {
        printf("File not found\n");
        return;
    }

    while (fscanf(file, "%s %d %d %f", record.name, &record.aadhar_number, &record.mobile_number, &record.total_bill) != EOF)
    {
        if (record.mobile_number == num)
        {
            found = 1;
            printf("Name: %s\n", record.name);
            printf("Aadhar Number: %d\n", record.aadhar_number);
            printf("Mobile Number: %d\n", record.mobile_number);
            printf("Total Bill: %f\n\n", record.total_bill);
        }
    }

    if (found == 0)
    {
        printf("Customer not found.\n");
    }

    fclose(file);
}

float average()
{
    Customer record;
    int k = 0;
    float sum = 0;

    FILE *file = fopen("electricity.txt", "r");
    if (file == NULL)
    {
        printf("File not found\n");
        return 0;
    }

    while (fscanf(file, "%s %d %d %f", record.name, &record.aadhar_number, &record.mobile_number, &record.total_bill) != EOF)
    {
        sum += record.total_bill;
        k++;
    }

    fclose(file);

    if (k != 0)
    {
        return sum / k;
    }
}

void display_details_bills()
{
    Customer record;
    FILE *file = fopen("electricity.txt", "r");
    if (file == NULL)
    {
        printf("Error. File doesn't exist.\n");
        return;
    }

    while (fscanf(file, "%s %d %d %f", record.name, &record.aadhar_number, &record.mobile_number, &record.total_bill) != EOF)
    {
        printf("Name: %s\n", record.name);
        printf("Aadhar Number: %d\n", record.aadhar_number);
        printf("Mobile Number: %d\n", record.mobile_number);
        printf("Total Bill: %f\n\n", record.total_bill);
    }

    fclose(file);
}

int main()
{
    printf("--Electricity Management System--\n");
    int choice;
    do
    {
        printf("Enter the choice from the following:\n");
        printf("1. Add a new customer record\n");
        printf("2. Display all customer records\n");
        printf("3. Search for a customer record using mobile number\n");
        printf("4. Average of all customer bills\n");
        printf("5. Display all customer details and monthly bills\n");
        printf("6. Exit the program\n");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            add_record();
            break;
        case 2:
            display_records();
            break;
        case 3:
            search();
            break;
        case 4:
            printf("Average: %f\n", average());
            break;
        case 5:
            display_details_bills();
            break;
        case 6:
            return 0;
        default:
            printf("Invalid choice.\n");
            break;
        }
    } while (choice != 6);
    return 0;
}