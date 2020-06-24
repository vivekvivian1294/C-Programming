/**
If-else statements are used to make a program behave dierently depending
on the program state or user input. As an example, one can use if-statements
to make sure that input is sane before performing an operation

int a;
int b;
...
if(b == 0){
printf("Error: Divide by zero!\n");
// Code for error handling.
...
}
else{
printf("Division evaluates to: %d\n", a/b);
}

Write functions that:
a) ask for an integer and output whether the entered number is zero or
not.
b) ask for two 
oats and outputs the largest of the inputs
c) ask for an integer and, if the number is divisible by two, divides it by
two, otherwise multiplies it by three and output the result. Here, the
modulo operator % is useful.
d) ask for three integers and output whether any of them are equal. Use
only one if-else-statement

Write a main function that calls your other functions. The output has to be
as follows:

Give an integer: 12
The number you entered does not equal zero
Give two floats: 13.4 20
20.000000 is the largest
Give an integer: 14
Result is: 7
Give three integers: 1 13 1
Some numbers are equal
[.../exercise]$ ./e3
Give an integer: 0
The number you entered equals zero
Give two floats: 13.2 -150
13.200000 is the largest
Give an integer: 7
Result is: 21
Give three integers: 2 5 13
All are unique

**/


#include <stdio.h>

void zero(int a)
{
  if(a==0)
    printf("The number you entered equals zero\n");
  else
    printf("The number you entered does not equal zero\n");
}

float large(float a, float b)
{
  if(a>b)
    return a;
  else
    return b;
}

int divide(int a)
{
  if(a%2==0)
    return a/2;
  else
    return a*3;
}

void equal(int a, int b, int c)
{

  if(a==b || a==c || b==c)
    printf("Some numbers are equal\n");
  else
    printf("All are unique\n");
}

int main()
{
  int a;
  printf("Give an integer: ");
  scanf("%d", &a);
  zero(a);

  float b,c;
  printf("Give two floats: ");
  scanf("%f %f", &b, &c);
  printf("%f is the largest\n", large(b,c));

  int d;
  printf("Give an integer: ");
  scanf("%d", &d);
  printf("Result is: %d\n", divide(d));

  int e,f,g;
  printf("Give three integers: ");
  scanf("%d %d %d", &e,&f,&g);
  equal(e,f,g);
  
}
