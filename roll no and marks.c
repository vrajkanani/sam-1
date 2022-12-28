#include <stdio.h>
void main()
{
  int rollno[20], marks[20], i;
  for (i = 0; i < 20; i++) {
    printf("\nEnter Roll of Student");
    scanf(" %d", & rollno[i]);
    printf("Enter Mark of Student");
    scanf(" %d", & marks[i]);
  }
  for (i = 0; i < 20; i++) 
  {
    printf("\n Roll No :  %d   Marks : %d", rollno[i], marks[i]);
  }

}
