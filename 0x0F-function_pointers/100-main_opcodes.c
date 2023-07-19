#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: Always 0 on success, 1 for incorrect number of arguments,
 *         and 2 for negative number of bytes.
 */
int main(int argc, char *argv[])
{
	int i, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	unsigned char *main_func = (unsigned char *)main;

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", *(main_func + i));
		if (i < bytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}

