#include<stdio.h>
double find_avg(int n1);
void main()
{
	int n1;
	double avg;
	printf("Enter a number:");
	scanf("%d",&n1);
	avg=find_avg(n1);
	printf("%lf",avg);
	return 0;
}
	double find_avg(int n1)
	{
		int sum=0,r=0,counter=6;
		double find_avg;
		r=n1%10;
		sum=sum+r;
		n1=n1/10;
		counter=counter+1;
	}

	find_avg=sum/(double)counter;
			return avg;	
	}
