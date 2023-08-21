// checking if the string is palindrome or not?
#include <stdio.h>
#include <string.h>
int main()
{
	int size, i = 0;
	printf("Enter the size of the string:-\n");
	scanf("%d", &size);
	char strng[size], rev_strng[size];
	printf("Enter the string:-\n");
	scanf("%s", &strng);
	while (i < strlen(strng))
	{
		rev_strng[i] = strng[strlen(strng) - i - 1];
		i++;
	}
	rev_strng[i] = '\0';
	if (strcmp(strng, rev_strng) == 0)
	{
		printf("The string is palindrome.");
	}
	else
	{
		printf("The string is not palindrome");
	}
}