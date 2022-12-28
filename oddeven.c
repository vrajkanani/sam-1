#include<stdio.h>
int main()
{
	int digit,no;
	printf("Enter a no.");
	scanf("%d",&no);
	digit=no%10;
	if(digit%2==0)
	{
		printf("given no is even");
	}
	else
	{
		printf("given no is odd");
	}
	return 0;
}
