/*Program for bitwise operator*/
#include<stdio.h>
void main()
{
int a = 10; 
int b = 6;
printf("a&b = %d", a&b);
printf("a|b = %d", a|b);
printf("a ^ b = %d", a ^ b);
printf("a&b && b+1 || 0 = %d", a&b && b+1 || 0);
}