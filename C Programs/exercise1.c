/**
In the introductory program we include the library stdio.h, which con-
tains the function printf. This function is used to produce output in the
form of characters that are printed in the terminal. 
In its simplest form, the function is called with a string as argument:
printf("This text is printed to the screen\n");
That is great, but we want our programs to output more than just the xed
strings that the programmer writes in the program. To print the contents
of variables, we add format speciers to the string and add the variables we
want to print as arguments:
int number;
char letter;
printf("%d is an integer and %c is a character\n", number, letter);
Dierent types of variables have dierent speciers, all starting with a per-
centage sign. Common speciers are %d for integers, %f for floats, %c for
characters and %s for strings. 
To output a percentage sign, we use %%.
Write a function that outputs:
a) The string: One half is 50%
b) two integers and their dierence.
c) two floats and the result of dividing one with the other
Write a main function that calls your other functions. The output has to be
as follows:
One half is 50%
The difference between 10 and 3 is 7
1.000000 / 3.000000 is 0.333333
**/





#include <stdio.h>

int main()
{
  printf("One half is 50%%\n");


  int x=10;
  int y=3;
  
  printf("The difference between %d and %d is %d\n", x, y, (x-y));

  float a=1;
  float b=3;

  printf("%f / %f is %f\n", a, b, (a/b));
  
}
