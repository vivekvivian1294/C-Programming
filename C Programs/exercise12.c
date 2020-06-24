/**
Write a second function for computing the Fibonacci sequence that uses
a loop instead of recursion, and that has linear runtime in the given input.
The output has to be as follows (negative numbers occur as a result of
arithmetic overflow):

Give n: 100
1
1
2
3
5
8
13
[...]
708252800
-798870975
-90618175
-889489150
-980107325

**/

#include <stdio.h>

//Main
int main()
{
	int a = 0, b = 1, d, c, n;

	printf("Give n: ");
	scanf("%d", &n);

	for(c = 1; c <= n; c++)
	{
		if(c <= 1)
		{
			d = c;
		}
		else
		{
			d = a + b;
			a = b;
			b = d;
		}
		printf("%d\n", d);
	}
	return 0;
}