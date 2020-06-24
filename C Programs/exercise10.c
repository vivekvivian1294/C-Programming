/**
In this exercise we are going to implement an algorithm to alphabedically
sort character strings. The algorithm we are using is called bubble sort, which
is an easy, but inecient sorting algorithm. The algorithm works as follows:
1 We are given an array of comparable elements.
2 We loop through the array, comparing the elements next to each other
in the array. If a pair is in the wrong order, we swap their position.
3 If any position was changed, go back to step 2. If we didn't nd a pair
in the wrong order, we are done.
Our program is going to operate on an input of unkown size, which means
that we have to do memory allocation dynamically using malloc and free
from stdlib.h.
When comparing strings we use strcmp from the library string.h. The
function strcmp considers the ASCII values of the characters when com-
paring, which means that numbers are considered smaller than uppercase
letters which are smaller than lowercase letters.
Write a program that asks the user for how many strings to input, what
the maximum string length is and then the actual strings. The program
should then output the same strings in alphabetical order (according to
strcmp). The program should be able to handle an arbitrary number of
strings of an arbitrary maximum length. Make sure to free up your allocated
memory.
The output has to be as follows:

Number of strings: 8
Maximum string length: 10
Give string 0: Hello
Give string 1: world!
Give string 2: Here
Give string 3: is
Give string 4: a
Give string 5: big
Give string 6: number:
Give string 7: 1234567890
Input when sorted:
1234567890
Hello
Here
a
big
is
number:
world!

**/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Function Definition
void bubble_sort(char *str[], int n);

//Main
int main()
{
	int n = 0, max = 0;
	
	printf("Number of strings: ");
	scanf("%d", &n);

	char *str[n];

	printf("Maximum string length: ");
	scanf("%d", &max);

	for(int i = 0; i < n; i++)
	{
		str[i] = malloc(n * sizeof(char));
		if(str == NULL)
		{
			printf("No Memory available..");
			return 0;
		}
	}

	for(int i = 0; i < n; i++)
	{
		printf("Give string %d: ", i);
		scanf("%s", str[i]);
	}

	printf("\n");
	
	bubble_sort(str, n);
	
	printf("Input when sorted: \n");
	for(int i = 0; i < n; i++)
	{
		printf("%s\n", str[i]);
	}

	//free(str);
}

//Function Declaration
void bubble_sort(char *str[], int n)
{
	char temp[n];

	for(int i = 0; i < n - 1; i++)
	{
		for(int j = 0; j < n - 1 - i; j++)
		{
			if(strcmp(str[j], str[j+1]) > 0)
			{
				strcpy(temp, str[j]);
				strcpy(str[j], str[j+1]);
				strcpy(str[j+1], temp);
			}
		}
	}
}