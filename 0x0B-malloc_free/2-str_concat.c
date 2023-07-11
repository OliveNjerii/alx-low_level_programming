#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int l1, l2, l3;

	l1 = strlen(s1);
	l2 = strlen(s2);
	l3 = l1 + l2;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	s3 = malloc((l3 + 1) * sizeof(char));

	if (s3 == NULL)
	{
		return (NULL);
	}

	strcpy(s3, s1);
	strcat(s3, s2);
	return (s3);
}

