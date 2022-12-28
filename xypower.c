#include<stdio.h>
int main()
{
	int base,exponent,ans=1,i=1;
		printf("Enter base:");
	scanf("%d",&base);
	printf("Enter exponent:");
	scanf("%d",&exponent);
	while(i<=exponent)
	{
		ans=ans*base;
		i++;
	}
	
	printf("%d",ans);

}
