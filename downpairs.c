#include<stdio.h>
void main()
{  char ch1, ch2, ch3, ch4, ch5;
   printf("Enter a five lettered word \n");
   scanf("%c%c%c%c%c", &ch1, &ch2, &ch3, &ch4, &ch5);
   printf("%c%c%c%c%c", 90+ch1-77, 90+ch2-77, 90+ch3-77, 90+ch4-77, 90+ch5-77);
}
