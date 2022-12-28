#include<stdio.h>
void main()
{
	int a[5],i;
	printf("Enter a value:");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("You entered: \n");
    for(i=0;i<=4;i++){
    	printf("%d\n",*(a+i));
	}
}
