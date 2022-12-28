#include<stdio.h>
void main()
{
   int 	i=1,countodd=0,counteven=0,n;
	while(i<=10)
	{
		printf("Enter number:");
		scanf("%d",&n);
		if(n%2==0)
		{
			counteven++;
		}
		else{
			countodd++;
		}
		i++;
	}
	printf("odd number is %d\n",countodd);
	printf("even number is %d",counteven);
	
}
