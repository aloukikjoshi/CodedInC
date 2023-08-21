#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define m 100
int k=0;
struct family{
	char head_name[30];
	float tot_inc,tot_exp,avg;
	int tot_mem;
}fdata[m];
void max_income(void)
{
	float max;
	int i,j;
	max=fdata[0].tot_inc;
	for(i=1;i<m;i++)
	{
		if(max<fdata[i].tot_inc)
		{
			j=i;
			max=fdata[i].tot_inc;
		}
	}
	FILE *ptr=fopen("family.txt","a");
	fprintf(ptr,"The maximum income among all familes is of family-%d and income is-%f\n",i,max);
	fclose(ptr);
}
void displayfams() {
    FILE* ptr = fopen("family.txt", "r");
    if (ptr== NULL) {
        printf("No file found.\n");
        return;
    }
	char name[30];
	float inc,exp,avg;
	int mem;
   while(fscanf(ptr,"%s %f %f %f %d",&name,&inc,&exp,&avg,&mem)!=EOF)
	{
		printf("Name:%s\nIncome:%f\nExpenditure:%f\nAverage:%f\nMembers:%d\n",name,inc,exp,avg,mem);
	}

    fclose(ptr);
}
void addfam(void)
{
	float totinc,totexp,avg;
	int totmem;
	char head[50];
	FILE *ptr;
	printf("Enter new head name:\t");
	scanf("%s",fdata[k].head_name);
	printf("Enter total expenditure of family:\t");
	scanf("%f",&fdata[k].tot_exp);
	printf("Enter total income of family:\t");
	scanf("%f",&fdata[k].tot_inc);
	printf("Enter total members in the family:\t");
	scanf("%d",&fdata[k].tot_mem);
	fdata[k].avg=fdata[k].tot_inc/fdata[k].tot_mem;
	ptr=fopen("family.txt","a");
	fprintf(ptr,"%s %f %f %f %d\n",fdata[k].head_name,fdata[k].tot_inc,fdata[k].tot_exp,fdata[k].avg,fdata[k].tot_mem);
	k++;
	fclose(ptr);
}
void searchbyhead(void)
{
	FILE* ptr=fopen("family.txt","r");
	if(ptr==NULL)
	{
		printf("Error in opening the file");
		return;
	}
	char name[30];
	float avg,exp,inc;
	int mem;              
	char search[30];
	printf("Enter the name to search:\t");
	scanf("%s",search);
	while(fscanf(ptr,"%s %f %f %f %d",&name,&inc,&exp,&avg,&mem)!=EOF)
	{
		if(strcmp(name,search)==0)
		{
			printf("Name:%s\nIncome:%f\nExpenditure:%f\nAverage:%f\nMembers:%d\n",name,inc,exp,avg,mem);
		}
	}
	fclose(ptr);
}
int main()
{
	int choice;

    while (1) {
        printf("Address Book\n");
        printf("1. Add family\n");
        printf("2. disply families\n");
        printf("3. family by head name\n4.Max income fam\n5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addfam();
                break;
            case 2:
                displayfams();
                break;
            case 3:
                searchbyhead();
                break;
            case 4:
            	max_income();
            	break;
            case 5:
            	printf("Exiting the process.....");
            	exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}