#include <stdio.h>
int main()
{
    int a[5];
    int  i,num,find;
    printf("Enter a value: ");
    for(i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter a value: ");
    scanf("%d", &num);
	find = 0; 
	for(i=0; i<5; i++)
    {
        if(a[i] == num)
        {
           find = 1;
            break;
        }
	}
    if(find == 1)
    {
        printf("\n%d is found",num);            
    }
    else
    {
        printf("\n%d is not found",num);
    }
    return 0;
}
