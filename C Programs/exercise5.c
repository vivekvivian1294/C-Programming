/**
a) Write a program that asks for a number. Then the program should
print 1 through the given number on separate lines.
b) Encapsulate your code in a while-loop that asks the user if he/she
would like to run the program again. Note that when reading a char-
acter from the input stream, the newline from the previous input is
still buered and considered as input. To discard the newline, start
the scanf string with a space like this: scanf(" %c", &input);.
The output has to be as follows:

Give a number: 5
1
2
3
4
5
Run again (y/n)? y
Give a number: 2
1
2
Run again (y/n)? n
Exiting...

**/

#include <stdio.h>

int main()
{
  char s = 'y';
  int a = 1;
  do
    {
      printf("Give a number: ");
      scanf("%d", &a);
      for(int i = 1; i <= a; i++)
	{
	  printf("%d\n", i);
	}
      printf("Run again (y/n)? ");
      scanf(" %c", &s);
    }while(s == 'y' || s == 'Y');
  printf("Exiting...\n");
}
