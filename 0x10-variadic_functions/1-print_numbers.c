#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums_to_print;
	unsigned int i;
	int num;

	va_start(nums_to_print, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(nums_to_print, int);
		/* Print the number */
		printf("%d", num);

		if (separator != NULL && i != n - 1)
		{
			/* Print separator if it's not NULL and not the last number */
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(nums_to_print);
}

