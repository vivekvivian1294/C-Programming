/**
In this exercise, you will practice how to program with pointers and
strings. Without using any library functions, write a C function
void append(char* str1, char* str2) { ... }
that takes as argument two strings str1, str2 and appends str2 to str1.
After calling append, the pointer str1 is supposed to point to the concate-
nation of (the original) str1 and str2. The caller of append has to make
sure that enough memory for the result of concatenation is available at the
memory address that str1 points to.
Example
char x[12] = { 'H', 'e', 'l', 'l', 'o', ' ',
0, 1, 2, 3, 4, 5 };
char *y = "world";
append(x, y);
// now "x" contains the string "Hello world"
Your implementation needs to make sure that the output string (pointed
to by str1) remains a well-formed string. Recall that, by denition, a string
in C is an array of characters terminated with zero.
Write a main function that asks the user to input 2 words and stores
them in character arrays. Then use your append function to append the
second word to the rst, and output the result. The output has to be as
follows:

Enter first word: Hello
Enter second word: World
Result of append: HelloWorld

**/
#include <stdio.h>

//Function Definition
void append(char * str1, char *str2);

//Main
int main()
{
	char str1[10], str2 [10];

	printf("Enter first word: ");
	gets(str1);

	printf("Enter second word: ");
	gets(str2);

	//Function Call
	append(str1, str2);

	printf("Result of append: %s\n", str1);
	return 0;
}

//Function Definition
void append(char * str1, char *str2)
{
	while(*str1)
	{
		str1++;
	}
	while(*str2)
	{
		*str1 = *str2;
		str2++;
		str1++;
	}
	*str1 = '\0';
}