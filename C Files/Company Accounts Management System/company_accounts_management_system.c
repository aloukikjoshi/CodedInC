#include <stdio.h>
#include <string.h>

struct Employee
{
    char empid[10];
    char empname[20];
    int basicpay;
    int allowance;
    int deductions;
    int netpay;
};

void get_employee_data(struct Employee arr[], int *n)
{
    if (*n < 5)
    {
        printf("Enter empid: ");
        scanf("%s", arr[*n].empid);
        printf("Enter empname: ");
        scanf("%s", arr[*n].empname);
        printf("Enter basic salary of the employee: ");
        scanf("%d", &arr[*n].basicpay);
        printf("Enter allowances: ");
        scanf("%d", &arr[*n].allowance);
        printf("Enter deductions: ");
        scanf("%d", &arr[*n].deductions);
        (*n)++;
    }
    else
    {
        printf("List is full. Cannot add more details.\n");
    }
}

void display(struct Employee arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        arr[i].netpay = arr[i].basicpay + arr[i].allowance - arr[i].deductions;
    }
    for (i = 0; i < n; i++)
    {
        printf("Netpay of Employee %s named %s is %d.\n", arr[i].empid, arr[i].empname, arr[i].netpay);
    }
}

int average_salary(struct Employee arr[], int n)
{
    int average, sum = 0, i;
    for (i = 0; i < n; i++)
    {
        sum += arr[i].netpay;
    }
    average = sum / n;
    return average;
}

int max_salary(struct Employee arr[], int n)
{
    int i = 0, maximum = arr[0].netpay, temp = 0;
    while (i < n)
    {
        if (arr[i].netpay > maximum)
        {
            temp = maximum;
            maximum = arr[i].netpay;
            arr[i].netpay = temp;
        }
        i++;
    }
    return maximum;
}

int main()
{
    int average, maximum, choice, n = 0;
    struct Employee arr[5];
    do
    {
        printf("Enter your choice among the following:\n");
        printf("1. Insert employee details.\n");
        printf("2. Calculate and display netpay of all employees.\n");
        printf("3. Calculate the average.\n");
        printf("4. Give the maximum salary.\n");
        printf("5. Exit the program.\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            get_employee_data(arr, &n);
            break;
        case 2:
            display(arr, n);
            break;
        case 3:
            average = average_salary(arr, n);
            printf("Average salary: %d\n", average);
            break;
        case 4:
            maximum = max_salary(arr, n);
            printf("Maximum salary: %d\n", maximum);
            break;
        case 5:
            return 0;
        default:
            printf("Invalid choice.\n");
            break;
        }
    } while (choice != 5);
    return 0;
}