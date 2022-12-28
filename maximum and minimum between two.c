#include<stdio.h>
int address(int a,int b);
void main()
{
	int a,b,ans;
	printf("Enter two value:");
	scanf("%d %d",&a,&b);
	ans=address(a,b);
}
int address(int a,int b)
{
	int ans;
	if(a>b){
		printf("a is maximum:");
	}
	else
	{
		{
		printf("b is maximum:");
	}
	return ans;
	}
}
