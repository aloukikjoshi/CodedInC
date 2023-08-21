#include <stdio.h>
#include <string.h>
union Data
{
    int i;
    float f;
    char ch[20];
};
int main()
{
    union Data d;
    d.i = 100;
    d.f = 200.5;
    strcpy(d.ch, " C Programming ");
    
    printf("Data.i : %d\n", d.i);
    printf("Data.f :%f\n", d.f);
    printf("Data.ch : %s\n ", d.ch);
    
    return 0;
}