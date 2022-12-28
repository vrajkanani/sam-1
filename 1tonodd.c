#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter no.");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==1)
		{		
			printf("%d",i);
		}
		i++;
	}
}
