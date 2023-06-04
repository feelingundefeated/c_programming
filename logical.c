/*Program for logical operator*/
#include<stdio.h>
void main()
{
int a = 1, b = 6, result_1, result_2;
result_1 = a--&&++b;
result_2 = --a&&++b;
printf("%d\n", result_1);
printf("%d\n", result_2);
}
