#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main- Entry point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int n;
	int last_digit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ()
	{
		printf("Last digit of %d is %d and is 0", n, last_digit);
	}
	else if ()
	{
		printf("Last digit of %d is %d and is greater than 5", n, last_digit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 5", n, last_digit);
	}
	return (0);
}
