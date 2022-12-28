#include<stdio.h>
void main()
{
	int a[50],i,pos=0,neg=0,num;
	printf("Enter value:");
	scanf("%d",&num);
	for(i=0; i<num; i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>0)
		{
			pos++;
		}
		else{
			neg++;
		}
	}
	printf("\npossitive=%d",pos);
	printf("\nnegetive=%d",neg);
}

