#include "main.h"

/**
 * print_alphabet - prints lowercase letters
 *
 * main - entry point
 *
 * Return: 0
 */

void print_alphabet(void);

int main(void)
{	print_alphabet();

	putchar ('\n');

	return (0);
}

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar (letter);
		letter++;
	}
}
