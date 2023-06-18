#include<stdio.h>

/**
 * main- entry point
 *
 * Description: prints digits using putchar
 *
 * Return: 0
 *
 */
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar (digit + '0');
		digit++;
	}

	putchar('\n');

	return (0);
}
