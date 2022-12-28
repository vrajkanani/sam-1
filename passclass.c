#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,pe;
	printf("Enter five subject mark:");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	pe=(s1+s2+s3+s4+s5)/5;
	if(pe<35)
	{
		printf("fail");
	}
	else if(pe>=35 && pe<=45)
	{
		printf("pass class");
	}
	else if(pe>=45 && pe<=60)
	{
		printf("second class");
	}
	else if(pe>=60 && pe<=70)
	{
		printf("first class");
	}else if(pe>=70 && pe<=100)
	{
		printf("distinction");
	}
	else
	{
		printf("not valid");
	}
	return 0;
}
