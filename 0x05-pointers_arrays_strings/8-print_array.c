#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints n elements of an array of integers
 * @a: The input array
 * @n: The number of elements to be printed
 *
 * Description: This function prints the elements of the array, separated by
 *              a comma and space, followed by a new line.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
			printf(", ");
	}

	printf("\n");
}

