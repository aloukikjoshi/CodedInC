#include <stdio.h>  

int main()  
{  
extern int a; // Compiler will search here for a variable a defined and initialized somewhere in the pogram or not.   
printf("%d",a);  
}  

int a = 20; 