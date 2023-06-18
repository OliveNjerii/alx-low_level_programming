#include<stdio.h>

/**
 * main- entry point
 *
 * Description: prints all the numbers of base 16 in lowercase
 *
 * Return: 0
 *
 */
int main(void)
{
	int digit = 0;

	while (digit <= 15)
	{
		if (digit <= 9)
		{
			putchar (digit + '0');
			digit++;
		}
		else if (digit > 9)
		{
			putchar (digit - 10 + 'a');
			digit++;
		}
	}

	putchar ('\n');

	return (0);
}
