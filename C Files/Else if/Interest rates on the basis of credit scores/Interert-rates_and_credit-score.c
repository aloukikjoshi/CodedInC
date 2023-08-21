#include <stdio.h>
int main()
{
int credits;
float interest;
printf("ENTER THE VALUE OF CREDIT SCORE: ");
scanf("%d", &credits);
if(credits>=800 &&credits<=900)
{
    printf ("The interest rate is: 8.65 %%.");
}
else if(credits >=750&&credits <800)
{
    printf("The interest rate is: 8.75 %%.");
}
else if(credits>=700&&credits<750)
{
    printf("The interest rate is: 9.05 %%.");
}

else if(credits>=600&&credits <700)
{
    printf("The rate of interest is: 9.30 %%.");
}

else if(credits<600)
{
    printf("The interest rate is: 9.75 %%.");
}
return 0;
}