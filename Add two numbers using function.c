#include<stdio.h>
int address(int a,int b);
void main()
{
	int a,b,ans;
	printf("Enter two value:");
	scanf("%d %d",&a,&b);
	ans=address(a,b);
	printf("ans=%d",ans);
}
int address(int a,int b)
{
	int ans;
	ans=a+b;
	return ans;
}
