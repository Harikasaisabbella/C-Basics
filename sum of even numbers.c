/* C program to find sum of first n odd natural numbers */
#include<stdio.h>
void main()
{ // Declaring the variables
  int n, sum;
  
  // Taking inputs
  printf("Enter the value of n\n");
  scanf("%d", &n);
  
  // Calculation
  sum = n*n;
  
  // Printing the results
  printf("sum of first n odd natural numbers is %d", sum);
}
