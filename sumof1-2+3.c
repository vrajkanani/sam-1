#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter value:");
	scanf("%d",&n);
	while(i<=n)	
	{
		if(i%2==0)
		{
			sum=sum-i;
		}
		else {
			sum=sum+i;
		}i++;
	}printf("%d",sum);
	return 0;
}
