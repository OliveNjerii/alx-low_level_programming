#include<stdio.h>

/**
 * main- entry point
 * Description- prints all alphabet letters in lower then upper cases
 *
 * Return: 0
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar (letter);
		letter++;
	}

	letter = 'A';

	while (letter <= 'Z')
	{
		putchar (letter);
		letter++;
	}

	putchar ('\n');

	return (0);
}
