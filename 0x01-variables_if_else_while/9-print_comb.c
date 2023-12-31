#include<stdio.h>

/**
 * main- entry point
 * Description:  prints all possible combinations of single-digit numbers.
 * Numbers must be separated by ,, followed by a space
 * Numbers should be printed in ascending order
 * You can only use the putchar function
 * All your code should be in the main function
 * You can only use putchar four times maximum in your code
 * You are not allowed to use any variable of type char
 * Return: 0
 */
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar (digit + '0');

		if (digit != 9)
		{
			putchar (',');
			putchar (' ');
		}
		digit++;
	}
	putchar ('\n');
	return (0);
}
