# c_programming
```c
/*Program to find the sum of three numbers*/

#include<stdio.h>
void main() 
{
int num1, num2, sum;
printf("Enter two numbers: ");
scanf("%d %d", &num1, &num2);
sum = num1 + num2;
printf("Sum of %d and %d is %d", num1, num2, sum);
return 0;
}

/*Program to compute average of three numbers*/

#include <stdio.h>
void main()
{
int a,b,c;
float sum,avg;
a=10;
b=5;
c=20;
sum = a+b+c;
avg = sum/3;
printf("The average is %.2f\n", avg);
}

This program reads three numbers from the user and calculates their average. 
The average is calculated by adding the three numbers together and dividing by 3. 
The result is then printed to the console with two decimal places using the %.2f format specifier.

/*Program for arithmetic operator*/

#include<stdio.h>
void main()
{
int a = 10;
int b = 7;
printf("a+b = %d", a+b);
printf("a-b = %d", a-b);
printf("a*b = %d", a*b);
printf("a/b = %d", a/b);
printf("a%b = %d", a%b);
} 

/*Program for Assignment operator*/
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

/*Program for Prefix/Postfix ++ -- operator*/
#include<stdio.h>
void main()
{
int a = 5, b, c, d;
b=++a;
c=a++;
d=++a;
printf("%d\n", a);   
}

/*Program for relational operator*/
#include<stdio.h>
void main()
{
int a=18, b=9, c, d, e=10, f;
c=b++;
d=b;
f=a>b>d<c;
printf("%d\n", a+c==b>=e<c+d!=1);
}

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
```
