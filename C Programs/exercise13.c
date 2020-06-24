/**
Write a program that reads an integer n as input, and outputs the num-
ber of bits that are set in the binary representation of n. Can you write this
program without using bit-shifts <<, >> (or multiplication/division by 2)?
The output has to look as follows:

Enter a number: 42
The number of bits set in 42 is 3

**/





	#include <stdio.h>
	#include <string.h>

	//Function Definition
	int set_bits(int num);

	//Main
	int main()
	{
		int num;
		printf("Enter a number: ");
		scanf("%d", &num);

		printf("The number of bits set in %d is %d\n", num, set_bits(num));
	}

	//Function Definition
	int set_bits(int num)
	{
		int check;
		for(check = 0; check <= num; check++)
		{
			num = num & (num - 1);
		}
		return check;
	}