#include<stdio.h>
int main()
{
    int a, sum=0, firstDigit, lastDigit;
    printf("Enter number  = ");
    scanf("%d", &a);
    lastDigit = a % 10;
    while(a >= 10)
    {
        a = a / 10;
    }
    firstDigit = a;
    sum = firstDigit + lastDigit;
    printf("Sum of first and last digit = %d", sum);
    
}
