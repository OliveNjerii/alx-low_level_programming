#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet letters
 * Return: 0
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar (letter);
		letter++;
	}
	_putchar ('\n');
}

/**
 * main- entry point
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
