/**

Loops are used to execute a statement or a block of code multiple times. A
loop will continue to execute as long as the loop condition is satised. These
two example loops will print the numbers 1 to 10 on one line and then 11
to 20 on the next line:
int i,j;
i = 1;
while(i < 11){
	printf("%d ", i);
	i=i+1;
	}
printf("\n");
for(j=11;j<=20;j++){
printf("%d ", j);
}
printf("\n");

Write functions that:
a) print all even numbers between 0 and 40.
b) print all the numbers between 1 and 100, with 10 numbers on each
line. Use two for loops. All columns should be aligned.
c) ask for a number than prints the number squared. This repeats until
the 0 is entered.
Write a main function that calls your other functions. The output has to be
as follows:

Even numbers between 0 and 40:
0 2 4 6 8 10 12 14 16 18 20 22 24 26 28 30 32 34 36 38 40
Numbers 1 to 100:
1 2 3 4 5 6 7 8 9 10
11 12 13 14 15 16 17 18 19 20
21 22 23 24 25 26 27 28 29 30
31 32 33 34 35 36 37 38 39 40
41 42 43 44 45 46 47 48 49 50
51 52 53 54 55 56 57 58 59 60
61 62 63 64 65 66 67 68 69 70
71 72 73 74 75 76 77 78 79 80
81 82 83 84 85 86 87 88 89 90
91 92 93 94 95 96 97 98 99 100
Give a number: 2
The square of 2 is 4
Give a number: 5
The square of 5 is 25
Give a number: 9
The square of 9 is 81
Give a number: 0
You entered zero.

**/




#include <stdio.h>

int main()
{
  printf("Even numbers between 0 and 40:\n");
  for(int i = 0; i <= 40; i++)
    {
      if(i % 2 == 0)
	{
	  printf("%d ", i);
	}
    }
  printf("\nNumbers 1 to 100:\n");
  for (int i = 1; i <= 100;)
    {
      for (int j = 0; j <= 9; j++)
	{
	  if(i >= 1 && i <= 9)
	    {
	      printf(" %d ", i++);
	    }
	  else
	    {
	       printf("%d ", i++);
	    }
	 
	}
      printf("\n");
      
    }
  int s=15;
      while(s != 0)
	{
	  printf("Give a number: ");
	  scanf("%d", &s);
	  if(s==0)
	    {
	      break;
	    }
	  printf("The square of %d is %d\n", s, s*s);
	}
      printf("You entered zero.\n");
}
