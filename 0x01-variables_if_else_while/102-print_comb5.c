#include<stdio.h>

/**
 * main- entry point
 * Description: prints all possible combinations of two two-digit numbers.
 * The numbers should range from 0 to 99
 * The two numbers should be separated by a space
 * All numbers should be printed with two digits. 1 should be printed as 01
 * The combination of numbers must be separated by comma, followed by a space
 * The combinations of numbers should be printed in ascending order
 * You can only use the putchar function
 * You can only use putchar eight times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 * Return: 0
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 99; num1++)
	{
		for (num2 = num1; num2 <= 99; num2++)
		{
			if (num1 != num2)
			{
				putchar (num1 / 10 + '0');
				putchar (num1 % 10 + '0');
				putchar (' ');
				putchar (num2 / 10 + '0');
				putchar (num2 % 10 + '0');

				if (num1 != 98 || num2 != 99)
				{
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
