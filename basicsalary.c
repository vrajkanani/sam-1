#include<stdio.h>
int main()
{
	int basic,hra,da,gross;
	printf("Enter basic income=");
	scanf("%d",&basic);
	if(basic >= 30000)
	{
		hra=basic*0.3;
		da=basic*0.95;
		gross=basic+hra+da;
		printf("gross salary is:%d",gross);
	}
	else if(basic >= 20000)
	{
		hra=basic*0.25;
		da=basic*0.9;
		gross=basic+hra+da;
		printf("gross salary is:%d",gross);
	}
	else if(basic >= 10000)
	{
		hra=basic*0.2;
		da=basic*0.8;
		gross=basic+hra+da;
		printf("gross salary is:%d",gross);
	}
	else
	{
		printf("Enter a valid no.");
	}
	return 0;
}
