#include "main.h"

/**
 * _puts - Prints a string followed by a new line.
 * @str: Pointer to the string.
 *
 * Description: This function takes a string as input and prints it character
 *              by character until the null terminator is encountered. It then
 *              prints a new line character to complete the line.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

