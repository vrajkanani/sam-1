#include<stdio.h>
int main()
{
	int num;
	printf("enter number:");
	scanf("%d",&num);
	if(num>0)
	{
		printf("Positive number");
	}
	
	else if(num<0)
	{
		printf("Negative number");
	}
	else if(num==0)
	{
		printf("Ziro");
	}
	return 0;
}
