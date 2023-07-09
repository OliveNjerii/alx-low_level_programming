/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the arguments
 * Return: Always 0
 */
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	(void)argv;

	if (argc > 1)
		printf("%d\n", argc);
	else
		printf("0\n");

	return (0);
}
