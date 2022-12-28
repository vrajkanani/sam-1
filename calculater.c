#include<stdio.h>
int main()
{
	int a,b,ans;
	char op;
	printf("Enter a char(+,_,*,/)=");
	scanf("%c",&op);
	printf("Enter two no.");
	scanf("%d%d",&a,&b);
	if(op=='+')
	{
		ans=a+b;
		printf("sum=%d",ans);
	}
	else if(op=='-')
		{
		ans=a-b;
		printf("sub=%d",ans);
	}
	else if(op=='*')
		{
		ans=a*b;
		printf("mul=%d",ans);
	}
		else if(op=='/')
		{
		ans=a/b;
		printf("div=%d",ans);
	}
	else 
	{
		printf("Enter a valid char");
	}
	return 0;
}

