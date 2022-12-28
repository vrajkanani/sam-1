#include<stdio.h>
void main()
{
	int i,a[60],size;
	printf("Enter a value:");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=size-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
}
