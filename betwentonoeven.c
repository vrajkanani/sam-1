#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter frist no.");
	scanf("%d",&a);
	printf("Enter second no.");
	scanf("%d",&b);
	while(a<=b)
	{
		if(a%2==0)
		{
			printf("%d",a);
		}
		a++;
	}
}
