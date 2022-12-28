#include<stdio.h>
void main()
{
	int i,x,y,ans=1;
	printf("Enter a x:");
	scanf("%d",&x);
	printf("Enter a y:");
	scanf("%d",&y);
	for(i=1;i<=y;i++)
	{
		ans=ans*x;
	}
	printf("%d",ans);
}
