/* C program to find simple_interest */
#include<stdio.h>
void main()
{  // Declaring the variables
   float principal, rate, time, simple_interest;
   
   // Taking inputs
   printf("Enter the principal\n");
   scanf("%f", &principal);
   printf("Enter rate\n");
   scanf("%f", &rate);
   printf("Enter time\n");
   scanf("%f", &time);
   
   // Calculation
   simple_interest = (principal*rate*time)/100;
   
   // Printing the results
   printf("simple_interest = %f", simple_interest);
}
