#include<stdio.h>
void main()
{
	int i,j,k,n=5,num=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-1;j++)
		{
			printf("");
		}
		for(k=1;k<=2*i-1;k++)
		if(k%2==0)
		{
			printf(" ");
		}
		else
		{
			printf("%d",i);
		}
	}
	return 0;
}
