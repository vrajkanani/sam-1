#include<stdio.h>
int main()
{
	int a=10,*ptr;
	ptr=&a;
	printf("%d\n",a);
	printf("%d\n",ptr);
	printf("%d\n",*ptr);
}
