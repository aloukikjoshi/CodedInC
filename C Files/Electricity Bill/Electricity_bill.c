#include<stdio.h>
#include<math.h>
int main()
{
    char user_name;
    int units, total_charges;
    int meter_charge = 100;
    printf("Enter the user name:-\n");
    scanf("%s", &user_name);
    printf("Enter the number of units:-\n");
    scanf("%d", &units);
    if (units <= 200)
    {
        total_charges = units*(0.80) + meter_charge;
        printf("Total Charges = %d", total_charges);
    }
    else if (200 < units <= 300)
    {
        total_charges = 200*(0.80) + (units-200)*(0.90) + meter_charge;
        printf("Total Charges = %d", total_charges);
    }
    else if (300<units)
    {
        total_charges = units + meter_charge;
        if (total_charges > 400)
        {
            total_charges = total_charges + (0.15)*total_charges;
            printf("Total Charges = %d", total_charges);
        }
    }
}