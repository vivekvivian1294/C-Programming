/**
The Fibonacci sequence is a sequence of numbers where the rst two
numbers are 1 and 1 and the next number in the sequence is the sum of theprevious two numbers. The n'th number in the sequence can be calculated
as:
f(1) = 1
f(2) = 1
f(n) = f(n 􀀀 1) + f(n 􀀀 2)
See the example for the seven rst numbers in the sequence.
a) Write a C function with a parameter n that returns the n'th Fibonacci
number. The function must be recursive, i.e., it should call itself.
b) Write a program that asks the user for a number n and then prints
the n rst numbers in the Fibonacci sequence.
The output has to be as follows:

Give n: 7
1
1
2
3
5
8
13

**/

#include <stdio.h>

//Function Definition
//void fibo(int n);
int fibo(int n);
//Main
int main()
{
	int n, i = 1;

	printf("Give n: ");
	scanf("%d", &n);

	//fibo(n);
	for(int j = 1; j <= n; j++)
	{
		printf("%d\n", fibo(i));
		i++;		
	}
	
}

/*
//Function Declaration
void fibo(int n)
{
	static int first = 0, second = 1, sum;

	if(n > 0)
	{
		sum = first + second;
		first = second;
		second = sum;
		printf("%d\n", sum);
		fibo(n - 1);
	}
}
*/

int fibo(int n)
{
	if(n == 0 || n == 1)
	{
		return n;
	}
	return fibo(n - 1) + fibo(n - 2);
}