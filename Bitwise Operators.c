/* Bitwise operators in C */
#include<stdio.h>
#include<math.h>
void main()
{  // Declaring the variables
   int value1 = 98, value2 = 57;
   
   // Taking inputs
   printf("value1\tvalue2\t&\t|\t^\n");
   
   // Printing the results
   printf("%d\t%d\t%d\t%d\t%d\n", value1, value2, value1&value2, value1|value2, value1^value2);
   printf("%d\t%d\t%d\t%d\t%d\n", 32, 55, 32&55, 32|55, 32^55);
   printf("%d\t%d\t%d\t%d\t%d\n", 74, 68, 74&68, 74|68, 74^68);
   printf("%d\t%d\t%d\t%d\t%d\n", 9, 30, 9&30, 9|30, 9^30);
   
   
}
