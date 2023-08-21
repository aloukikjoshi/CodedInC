#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
    char number []="0123456789";
    char lowercase []="abcdefghijklmnopqrstuvwxyz";
    char uppercase []="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int size;
    printf ("Enter the size of the password: ");
    scanf("%d",&size);
    char password [20];
    srand((unsigned int) (time(NULL)));
    for(int i=0;i<size;i++)
    {
        int random_number=rand()%3;
        if(random_number==0)
        {
            random_number=rand()%10;
            password[i]=number[random_number];
            printf("%c", password[i]);
        }
        else if(random_number==1)
        {
            random_number=rand()%26;
            password[i]=lowercase[random_number];
            printf("%c", password[i]);
        }
        else
        {
            random_number=rand()%26;
            password[i]=uppercase[random_number];
            printf("%c", password[i]);
        }
    }
}
