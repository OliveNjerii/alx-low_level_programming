#include<stdio.h>

/**
 * main - entry point
 * Description- prints all alphabets in lowercase
 * Return: 0 (success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
