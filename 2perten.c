#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		k=1;
		for(j=5;j>=i;j--)
		{
			printf("%d ",k);
			k++;
		}
		printf("\n");
	}
}
