/**

In this exercise we look at some basic operations on arrays. Write a C
function that:
a) counts the number of 0's in an integer array. The number of 0's is
returned by the function.
b) prints an array of integers. The integers are printed on one line, en-
closed in curly brackets and separated by commas.
c) triples the value of all elements in an array of integers.
All functions take two parameters, a pointer to the array of integers and the
number of elements in the array.

Write a main function that asks the user to input 10 integers and stores
them in an array. Use your other functions to print the initial array, the
number of zero-valued elements in the array and the contents of the array
when all elements have been tripled. The output has to be as follows:

Input 10 numbers: 1 2 3 0 -3 -2 -1 0 10 11
Initial array: { 1, 2, 3, 0, -3, -2, -1, 0, 10, 11 }
Number of 0's: 2
Tripled array: { 3, 6, 9, 0, -9, -6, -3, 0, 30, 33 }

**/

#include <stdio.h>

//Function Definition
int zero(int array[]);
int tripple(int array[]);

//Main
int main()
{
	int array[10];
	int i = 0;

	printf("Input 10 numbers: ");
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &array[i]);
	}

	printf("Initial array: {"); 
	for(i = 0; i < 10; i++)
	{
		printf(" %d", array[i]);
		if(i < 9)
		{
			printf(",");
		}
	}
	printf(" }\n");

	//Function Call
	zero(array);
	tripple(array);
}

//Function Definition
int zero(int array[10])
{
	int i = 0;
	int flag = 0;
	for(i = 0; i < 10; i++)
	{
		if(array[i] == 0)
		{
			flag = flag + 1;
		}
	}
	printf("Number of 0's: %d\n", flag);
}

int tripple(int array[10])
{
	int i = 0;
	int tripple[10];
	for(i = 0; i < 10; i++)
	{
		tripple[i] = array[i] * 3;
	}
	printf("Tripled array: {");
	for(i = 0; i < 10; i++)
	{
		printf(" %d", tripple[i]);
		if(i < 9)
		{
			printf(",");
		}
	}
	printf(" }\n");
}