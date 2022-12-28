#include<stdio.h>  
  
int main()  
{  
    int num, count = 1, sum = 0;  
  
    printf("Enter a number\n");  
    scanf("%d", &num);  
  
    while(count < num)  
    {  
        if(num%count == 0)  
        {  
            sum = sum + count;  
        }  
        count++;  
    }  
  
    if(sum == num)  
    {  
        printf("\n%d is a perfect number\n", num);  
    }  
    else  
    {  
        printf("\n%d is not a perfect number\n", num);  
    }  
  
    return 0;  
}  
