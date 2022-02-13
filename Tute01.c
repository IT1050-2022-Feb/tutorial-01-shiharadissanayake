/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int m1,m2;
   float average;
   int sum;
   printf("enter first mark");
   scanf("%d",&m1);
   printf("enter second mark")
      scanf("%d",&m2);
   sum=m1+m2;
   average=sum/2.0;
   printf("average is %2f",average);
   
  
  return 0;
}

