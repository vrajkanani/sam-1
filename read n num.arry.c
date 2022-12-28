#include<stdio.h>
void main()
{
	int a[50],i;
	printf("Enter five value:");
	for(i=0; i<5; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0; i<5; i++)
	{
		printf("%d",a[i]);
	}
}
