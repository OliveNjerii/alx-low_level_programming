#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Creates a duplicate of a string.
 * @str: The string to be duplicated.
 *
 * Return: A pointer to the duplicated string, or NULL if it fails.
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i, length;

	if (str == NULL)
	{
		return (NULL);
	}

	length = strlen(str);
	s = malloc(sizeof(char) * (length + 1));

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';
	return (s);
}
