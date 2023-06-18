#include<stdio.h>

/**
 * main- entry point
 *
 * Description: lowercase alphabets in reverse
 *
 * Return: 0
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');

	return (0);
}
