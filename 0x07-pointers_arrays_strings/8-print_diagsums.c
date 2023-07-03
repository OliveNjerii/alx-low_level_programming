#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the square matrix of integers.
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i); /* Access diagonal elements */
		sum2 += *(a + i * size + (size - i - 1)); /* Access opposite diagonal elements */
	}

	printf("%d, %d\n", sum1, sum2);
}

