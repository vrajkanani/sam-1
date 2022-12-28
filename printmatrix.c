#include<stdio.h>
int main(){
   
   int i, j,n,m;
   printf("Enter n: ");
   scanf("%d",&n);
   printf("Enter m: ");
   scanf("%d",&m);
   int a[n][m];
   
   for(i=0; i<n; i++) 
   {
      for(j=0;j<m;j++) 
	  {
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &a[i][j]);
      }
   }
   
   printf("two-dimensional array elements:\n");
   for(i=0; i<n; i++) 
   {
      for(j=0;j<m;j++) 
	  {
         printf("%d ", a[i][j]);
         if(j==m-1)
		 {
            printf("\n");
         }
      }
   }
   return 0;
}
	
