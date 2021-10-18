/* C program to check even or odd using switch case */
#include<stdio.h>
void main()
{ // Declaring the variables
  int num;
  
  // Taking input
  printf("Enter a number:");
  scanf("%d", &num);
  
  switch(num % 2)
  {
  	case 0:
  		printf("Even");
  		break;
  	case 1:
  		printf("Odd");
  		break;
  }
}
