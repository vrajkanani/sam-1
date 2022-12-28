#include <stdio.h>
int main(){
	int arr[5],i,b,count=0;
	printf("Enter size of array:");
	scanf("%d",&b);
	printf("Enter array elements:\n");
	for(i=0; i<b; i++){
		scanf("%d", &arr[i]);
		if(arr[i]%3 ==0)
			count++;
	}
	printf("Total elements divisible by %d is %d\n",b, count);
	
	return 0;
}
