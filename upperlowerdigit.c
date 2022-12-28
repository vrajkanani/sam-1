#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a char:");
	scanf("%c",&ch);
	if(ch>=97 && ch<=122)
	{
		printf("lowercase");
	}
	else if(ch>=65 && ch<=90)
	{
		printf("UPPERCASE");
	}
	else	if(ch>=48 && ch<=57)
	{
		printf("digit");
	}
	else 
	{
		printf("spacial char.");
	}
	return 0;
}
