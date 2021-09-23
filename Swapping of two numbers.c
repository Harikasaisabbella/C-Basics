/* C program to swap two numbers */
#include<stdio.h>
void main()
{ // Declaring the variables
  int num1, num2, temp;
  // Taking inputs
  printf("Enter two numbers\n");
  scanf("%d%d", &num1, &num2);
  temp = num1;
  num1 = num2;
  num2 = temp; 
  // Printing the result
  printf("After swap num1=%d num2=%d", num1, num2);
}
