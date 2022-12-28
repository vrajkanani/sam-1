#include<stdio.h>
int main()
{
	int a=10,b=20,*ptr1,temp,*ptr2;
	ptr1=&a;
	ptr2=&b;
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
//	printf("a=%d\n",a);
//	printf("b=%d\n",a);
	printf("a=%d\n",*ptr1);
	printf("b=%d\n",*ptr2);
}
