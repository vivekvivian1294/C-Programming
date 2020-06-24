/**
For input we use the function scanf, also from the library stdio.h. The
scanf function takes a format string followed by references to where the
input should be stored. Example that reads an integer to a variable:

int number;
scanf("%d", &number);

Notice that the & character in front of the varable name. It means that
the variable is passed as reference to scanf. It allows scanf to update the
value of the variable. If & is not there, the program would likely crash at
that point. When reading a string, the & sign can be omitted:

char my_variable[100];
scanf("%s", my_variable);

Write functions that:
a) asks for two integers and outputs them and their sum.
b) asks for two 
oats and outputs their product.
c) asks for a word and prints it twice on the same row.
Write a main function that calls your other functions. The output has to be
as follows:

Give two integers: 12 5
You entered 12 and 5, their sum is: 17
Give two floats: 3.14 2
You entered 3.140000 and 2.000000, their product is: 6.280000
Give a word: Yey!
Yey! Yey!

**/


#include <stdio.h>

int sum(int a, int b)
{
return a+b;
}

float product(float a, float b)
{
return a*b;
}

void twice(char c[100])
{
printf("%s %s",c,c);
}


int main()
{
int a,b;
printf("Give two integers: ");
scanf("%d %d", &a, &b);

printf("You entered %d and %d, their sum is: %d\n", a, b, sum(a,b));

float c,d;
printf("Give two floats: ");
scanf("%f %f", &c, &d);

printf("You entered %f and %f, their product is: %f\n", c, d, product(c,d));

char e[100];

printf("Give a word: ");
scanf("%s", e);

twice(e);printf("\n");
}
