#include<stdio.h>
int address(int a,int b);
void main()
{
	int a,b,temp;
//	printf("Enter a two value:");
//	scanf("a=%d b=%d",&a,&b);
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	temp=address(a,b);
	
}
int address(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("\na=%d \nb=%d",a,b);
	return temp;
}
