/**
 * create_array - Creates an array of chars and initializes it.
 * @size: The size of the array to create.
 * @c: The char to initialize the array with.
 *
 * Return: A pointer to the created array, or NULL if it fails.
 */
#include "main.h"
#include<stdlib.h>
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	a = malloc((size + 1) * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	i = 0;

	while (i < size)
	{
		a[i] = c;
		i++;
	}

	a[i] = '\0';

	return (a);
}
