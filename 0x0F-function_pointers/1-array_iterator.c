#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: Pointer to an integer array.
 * @size: Size of the array.
 * @action: Pointer to a function that takes an int as an argument.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

