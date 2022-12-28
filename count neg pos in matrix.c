#include<stdio.h>
int main()
{
   int i, j,n=3,m=3,pos=0,neg=0,zero=0;
   int a[n][m];
   for(i=0; i<n; i++) 
   {
      for(j=0;j<m;j++) 
	  {
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &a[i][j]);
         if(a[i][j]>0)
         {
         	pos++;
		 }
		 
		 if(a[i][j]<0)
		 {
		 	neg++;
		 }
		 if(a[i][j]==0)
		 {
		 	zero++;
		 }
      }
   }
   printf("positive number is :%d\n",pos);
   printf("negative number is :%d\n",neg);
   printf("zero number is :%d",zero);
}
