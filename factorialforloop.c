#include<stdio.h>
void main()
{
	int i,n,sum=1;
	printf("Enter a vlaue:");
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	{
		
		sum=sum*i;
		
	}
	printf("Sum=%d",sum);
}
