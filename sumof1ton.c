#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("Enter two no.");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d+",i);
		sum=sum+i;
		i++;
	}
	printf("sum=%d",sum);
}
