#include "main.h"

/**
 * _strlen - Computes the length of a string
 * @str: The input string
 *
 * Return: The length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str)
	{
		len++;
		str++;
	}

	return (len);
}

/**
 * puts_half - Prints half of a string, followed by a new line
 * @str: The input string
 *
 * Description: This function prints the second half of the string. If the
 *              number of characters is odd, it prints the last n characters,
 *              where n = (length_of_the_string - 1) / 2.
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int start_index, i;

	start_index = (len % 2 == 0) ? (len / 2) : ((len - 1) / 2 + 1);

	for (i = start_index; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}

