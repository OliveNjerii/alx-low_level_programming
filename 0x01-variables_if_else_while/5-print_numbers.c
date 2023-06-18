#include<stdio.h>

/**
 * main- entry point
 *
 * Description:  prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0
 *
 */
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%d", digit);
		digit++;
	}

	printf("\n");

	return (0);
}
