#include <stdio.h>
struct student
{
   char name[50];
   int height;
};
int main()
{
    struct student stud1[5], stud2[5];   
    FILE *fptr;
    int i;
    fptr = fopen("file.dat","w, ccs=UTF-8");
    for(i = 0; i < 3; ++i)
    {
        fflush(stdin);
        printf("Enter name: ");
        gets(stud1[i].name);

        printf("Enter height: "); 
        scanf("%d", &stud1[i].height); 
    }
    fwrite(stud1, sizeof(stud1), 1, fptr);
fclose(fptr);
fptr = fopen("file.dat", "r");
    fread(stud2, sizeof(stud2), 1, fptr);
    for(i = 0; i < 3; ++i)
    {
        printf("Name: %s Height: %d\n", stud2[i].name, stud2[i].height);
    }
    fclose(fptr);
}