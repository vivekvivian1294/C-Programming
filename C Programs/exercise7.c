/**

Write functions for the four basic mathematical operations addition,
subtraction, multiplication and division. Each function has two num-
bers as parameters and returns the result. Use integers. You do NOT
have to do rounding for the division.
b) Write a program that asks the user for numbers a and b, and then use
these numbers as arguments for your functions and print the result on
the screen.
The output has to be as follows:

Give a: 11
Give b: 5
11 + 5 = 16
11 - 5 = 6
11 * 5 = 55
11 / 5 = 2

**/

#include<stdio.h>

//Function Declaration
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

//Main
int main()
{
	int a, b;
	printf("Give a: ");
	scanf("%d", &a);

	printf("Give b: ");
	scanf("%d", &b);
	add(a,b);
	sub(a,b);
	mul(a,b);
	div(a,b);
}

//Function Definition
int add(int a, int b)
{
	int sum;
	sum = a + b;
	printf("%d + %d = %d\n", a, b, sum);
}
int sub(int a, int b)
{
	int sub;
	sub = a - b;
	printf("%d - %d = %d\n", a, b, sub); 
}
int mul(int a, int b)
{
	int mul;
	mul = a * b;
	printf("%d * %d = %d\n", a, b, mul);
}
int div(int a, int b)
{
	int div;
	div = a / b;
	printf("%d / %d = %d\n", a, b, div);
}