#include<stdio.h>
void main()
{
	int i,a[50],sum=0,avg;
	printf("Enter a value:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("\nsum=%d",sum);
	avg=sum/5;
	printf("\navg=%d",avg);
}
