#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name.
 * @name: The name to be printed.
 * @f: Pointer to a function that takes a char* as an argument.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

