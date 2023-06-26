#include "main.h"

/**
 * _strlen - Calculates the length of a string.
 * @s: Pointer to the string.
 *
 * Description: This function takes a string as input and calculates its length
 *              by iterating through each character until the null terminator
 *              is encountered.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

