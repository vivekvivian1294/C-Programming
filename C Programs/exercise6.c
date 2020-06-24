/**

Functions are a great way to make code reusable, improve the structure of
the code and isolate errors. Write functions that:
a) take two 
oats as argument and returns the minimum of those.
b) take four 
oats as argument and returns the minimum. Make use of
the function dened in a).
c) are the same as in a) and b), but returns the maximum.
d) take four 
oats as argument and returns their sum.
Write a main function that asks the user for four 
oats and then outputs the
minimum, maximum, their sum and mean value. Use the functions from a) - d) to implement this. The output has to be as follows:

Give four floats: 10.0 -2.3 13.2 20.4
min: -2.300000
max: 20.400000
sum: 41.299999
mean: 10.325000

**/

#include <stdio.h>

//Function Declaration
float max_min(float array[]);
float add_mean(float array[]);

//Main
int main()
{
	float array[100], maximum, sum;
	int size = 4;
	
	printf("Give four floats: ");
	for(int i = 0; i <= 3; i++)
	{
		scanf("%f", &array[i]);
	}
	
	maximum = max_min(array);
	sum = add_mean(array);
}


//Function Definition
float max_min(float array[100])
{
	float index = 0;
	float maximum, minimum;
	maximum = minimum = array[0];
	int i;
	for(i = 1; i <= 3; i++)
	{
		if(maximum < array[i])
		{
			maximum = array[i];
		}
		if(minimum > array[i])
		{
			minimum = array[i];
		}
	}
	printf("Min: %f\n", minimum);
	printf("Max: %f\n", maximum);
	}

float add_mean(float array[100])
{
	float sum = 0, mean = 0;
	int i, n = 4;
	for(i = 0; i <= 3; i++)
	{
		sum = sum + array[i];
	}
	printf("Sum: %f\n", sum);
	mean = sum / n;
	printf("Mean: %f\n", mean);
}
