#include<stdio.h>
#include<math.h>
void main()
{
	float i,n,s;
	while(i<=9)
	{
		printf(" %.0f=",i);
		s=sqrt(i);
		printf("%.3f\n",s);
		i++;	
	}
}
