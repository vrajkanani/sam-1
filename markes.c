#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,pe;
	printf("Enter five subject marks:");
	scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
	pe=(s1+s2+s3+s4+s5)/5;
	if(pe<35)
	{
		printf("Fail");
	}
	else if(pe>=35 && pe<=45)
	{
		printf("Pass");
	}
	else if(pe>=45 && pe<=65)
	{
		printf("Pass");
	}
	else if(pe>=65 && pe<=70)
	{
		printf("second class");
	}
	else if(pe>=70 && pe<=100)
	{
		printf("frist class");
	}
	else
	{
		printf("Enter a valid mark");
	}
	return 0;
}
