#include<stdio.h>
int main()
{
	char ch;
	printf("enter character:");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='0'||ch=='u')
	{
		printf("vowel");
		
	}
	else
	{
		printf("consonent");
	}
	return 0;
}
