#include<stdio.h>
void main()
{
	int i,j,n=1,a;
	printf("Enter a value:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",n);
			n++;
		}
		printf("\n");
	}
}
/*Enter a value:5
1
23
456
78910
1112131415*/
