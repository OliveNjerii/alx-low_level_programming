#include<stdio.h>

/**
 * main- entry point
 *
 * Description: prints all letters of the alphabet except q and e
 *
 * Return: 0
 *
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'e' || letter == 'q')
		{
			letter++;
			continue;
		}

		putchar (letter);
		letter++;
	}

	putchar ('\n');

	return (0);
}
