/* C program to find the sum of n natural numbers */
#include<stdio.h>
void main()
{  // Declaring the variables
   int n, sum;
   
   // Taking inputs (values of n)
   printf("Enter the value of n\n");
   scanf("%d", &n);
   
   // Calculation
   sum = (n*(n+1))/2;
   
   // Printing the results
   printf("sum of n natural numbers is %d", sum);
}
