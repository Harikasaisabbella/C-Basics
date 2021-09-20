/* C program to decrypt the word */
#include<stdio.h>
void main()
{   // Declaring the varaibles
    int number1, number2, number3;
    
    // Taking inputs
   printf("Enter three numbers(from 1-26)\n");
   scanf("%d %d %d", &number1, &number2, &number3);
   
   // Printing the results
   printf("%c %c %c", 95+number1, 95+number2, 95+number3);

}
