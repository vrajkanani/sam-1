#include <stdio.h>
int main()
{
    int arr[100];
    int i, max, min, size,avg,sum;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter elements in the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
		sum=sum+arr[i];
    }
    max = arr[0];
    min = arr[0];
    for(i=1; i<size; i++)
    {
      
        if(arr[i] > max)
        {
            max = arr[i];
        }
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
   	printf("\nsum=%d",sum);
	avg=sum/size;
	printf("\navg=%d\n",avg);
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d", min);
    return 0;
}
