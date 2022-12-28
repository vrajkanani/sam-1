#include<stdio.h>
void main()
{
	int i=1,n,ans=1;
	printf("Enter a no.");
	scanf("%d",&n);
	while(i<=n)
	{
		ans=ans*i;
		i++;
	}
	printf("%d",ans);
}
