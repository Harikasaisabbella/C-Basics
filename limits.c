#include<stdio.h>
#include<limits.h>
void main()
{  printf("Short:\nSigned: %hd to %hd\n", SHRT_MIN, SHRT_MAX);
   printf("unsigned: %hu to %hu\n", 0, USHRT_MAX);
   printf("int:\nSigned: %d to %d\n", INT_MIN, INT_MAX);
   printf("unsigned: %u to %u\n", 0, UINT_MAX);
   printf("long:\nSigned: %ld to %ld\n", LONG_MIN, LONG_MAX);
   printf("unsigned: %lu to %lu\n", 0, ULONG_MAX);
   printf("long long:\nSigned: %lld to %lld\n", LONG_LONG_MIN, LONG_LONG_MAX);
   printf("unsigned: %llu to %llu\n", 0, ULONG_LONG_MAX);
   
}
