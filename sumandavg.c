#include<stdio.h>
int main()
{
	int i=1,a,no,sum=0,avg;
	printf("Enter a no.=");
	scanf("%d",&a);
	while(i<=a)
	{
	printf("Enter a value=");
	scanf("%d",&no);
	i++;
	sum=sum+no;
	}	
	printf("sum=%d",sum);
	avg=sum/a;
	printf("avg=%d\n",avg);
}
