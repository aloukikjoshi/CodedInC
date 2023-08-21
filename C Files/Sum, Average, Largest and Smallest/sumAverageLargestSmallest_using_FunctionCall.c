#include <stdio.h>
#include<math.h>

//fuction prototyping

int sum(int number_1,int number_2,int number_3);
float average(float number_1,float number_2,float number_3);
int largest(int number_1,int number_2,int number_3);
int smallest(int number_1,int number_2,int number_3);

//main function
int main()
{
    int number_1, number_2, number_3;
    printf("Enter the three numbers:-\n");
    scanf("%d", &number_1);
    scanf("%d", &number_2);
    scanf("%d", &number_3);
    printf("%d\n",sum(number_1,number_2,number_3));
    printf("%0.2f\n",average(number_1,number_2,number_3));
    printf("%d is the largest number.\n",largest(number_1,number_2,number_3));
    printf("%d is the smallest number.\n",smallest(number_1,number_2,number_3));
}

//function for addition
int sum(int number_1,int number_2,int number_3)
{
    int add = number_1 + number_2 + number_3;
    return add;
}

//function for average
float average(float number_1,float number_2,float number_3)
{
    float mean = (number_1 + number_2 + number_3)/3;
    return mean;
}

//function for finding the largest number
int largest(int number_1,int number_2,int number_3)
{
    if (number_1 >= number_2 && number_1 >= number_3)
    {
        return number_1;
    }
    if (number_2 >= number_1 && number_2 >= number_3)
    {
        return number_2;
    }
    if (number_3 >= number_1 && number_3 >= number_2)
    {
        return number_3;
    }
}

//function for finding smallest number
int smallest(int number_1,int number_2,int number_3)
{
    if (number_1 <= number_2 && number_1 <= number_3)
    {
        return number_1;
    }
    if (number_2 <= number_1 && number_2 <= number_3)
    {
        return number_2;
    }
    if (number_3 <= number_1 && number_3 <= number_2)
    {
        return number_3;
    }
}