#include <stdio.h>
int main()
{
    char a[100];
    int i;
    printf("Enter a string:");
    scanf("%s", a);
   
    printf("\nYou enter:");
    printf("%s\n",a);
    
    for (i=0; a[i] != '\0'; i++)
	{
	
	}
	printf("\nstring Length is: %d", i);
    return 0;
}
