#include<stdio.h>
int simpleintrest(int p,int r,int d);
void main()
{
	int p,r,d,simplein;
//	printf("Enter p,r,d:");
//	scanf("%d%d%d",&p,&r,&d);
	printf("Enter p:");
	scanf("%d",&p);
	printf("Enter r:");
	scanf("%d",&r);
	printf("Enter d:");
	scanf("%d",&d);
	simplein=simpleintrest(p,r,d);
	printf("simpleintrest=%d",simplein);
}
int simpleintrest(int p,int r,int d)
{
	int simplein;
	simplein=(p*r*d)/100;
	return simplein;
}
