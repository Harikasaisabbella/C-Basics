/* C program to perform all arithmetic operations */
#include<stdio.h>
void main()
{   
    // Declaring required variables
    int number1, number2, sum, difference, product, remainder;
    float quotient;
    
    // Taking inputs
    printf("Enter value of number1:\n");
    scanf("%d", &number1);
    printf("Enter value of number2:\n");
    scanf("%d", &number2);
    
    // Calculation
    sum = number1+number2;
    difference = number1-number2;
    product = number1*number2;
    remainder = number1%number2;
    quotient = number1*1.0/number2;
    
    // Printing the results
    printf("sum of %d and %d is : %d\n", number1, number2, sum);
    printf("difference between %d and %d is : %d\n", number1, number2, difference);
    printf("product of %d and %d is : %d\n", number1, number2, product);
    printf("remainder when %d is divided by %d is : %d\n", number1, number2, remainder);
    printf("quotient when %d is divided by %d is : %f\n", number1, number2, quotient);
    
}
