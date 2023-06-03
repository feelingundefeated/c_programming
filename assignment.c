#include<stdio.h>
void main()
{
int a = 10, b = 20, c;
printf("a=%d\n,b=%d\n", a, b);
c=a+b;
printf("c=%d\n", c);
c+=a;
printf("c=%d\n", c);
c-=b;
printf("c=%d\n", c);
c*=a;
printf("c=%d\n", c);
c/=b;
printf("c=%d\n", c);
}