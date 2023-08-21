#include <stdio.h>

int main()
{
    int n;
    printf("Marks of the students in percentage: \n");
    scanf("%d",&n);
    if(n>=90)
    {printf("Proficiency level is A and the student is eligible for CSE dept.\n");
    }
    else if(n>=85&&n<90)
    {printf("Proficiency level is B and student is eligible for EEE dept.\n");
    }
    else if(n>=80&&n<85)
    {printf("Proficiency level is C and student is eligible for ECE dept.\n");
    }
    else if(n>=75&&n<80)
    {printf("Proficiency level is D and student is eligible for MEE dept.\n");
    }
    else if(n>=70&&n<75)
    {printf("Proficiency level is E and student is eligible for CE dept.\n");
    }
    else if(n<70)
    {printf("Proficiency level is F and student is not eligible for any dept.\n");
    }
}