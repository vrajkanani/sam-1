#include<stdio.h>
int main()
{
	int sec,min,hr;
	printf("\nEnter sec:");
	scanf("%d",&sec);
	hr=sec/3600;
	printf("\nhr:%d",hr);
	min=(sec-(hr*3600))/60;
	printf("\nmin:%d",min);
	sec=(sec-(hr*3600)-(min*60));
	printf("\nsec:%d",sec);
	printf("\nhr:min:sec=%d%d%d",hr,min,sec);
	return 0;
}
