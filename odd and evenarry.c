#include<stdio.h>
void main()
{
	int i,a[50],odd=0,even=0;
	printf("Enter a value:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
		printf("\neven=%d",even);
		printf("\nodd=%d",odd);
}
