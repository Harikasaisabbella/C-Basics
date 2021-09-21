/* C program to find n even natural numbers */
#include<stdio.h>
void main()
{
// Declaring the variables
   int n, sum;
   
   // Taking inputs (values of n)
   printf("Enter the value of n\n");
   scanf("%d", &n);
   
   // Calculation
   sum = n*(n+1);
   
   // Printing the results
   printf("sum of n even natural numbers is %d", sum);
}
