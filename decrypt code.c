/* C program to decrypt code */
#include<stdio.h>
void main()
{  // Declaring the variables
  char a, b, c;
  
  // Taking inputs
  printf("Enter a three lettered word\n");
  scanf("%c%c%c", &a, &b, &c);
  
  // printing the results
  printf("%d%d%d", a-95, b-95, c-95);
}
