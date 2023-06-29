#include <stdio.h>
#include "main.h"

/**
 * is_leap_year - checks if a year is a leap year
 * @year: year
 * Return: 1 if leap year, 0 otherwise
 */
int is_leap_year(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		return 1;
	else
		return 0;
}

/**
 * get_day_of_year - calculates the day of the year based on month and day
 * @month: month
 * @day: day
 * @leap_year: flag indicating if it's a leap year
 * Return: day of the year
 */
int get_day_of_year(int month, int day, int leap_year)
{
	int day_of_year = 0;
	int days_in_month[] = {31, 28 + leap_year, 31, 30, 31, 30,
		31, 31, 30, 31, 30, 31};

	for (int i = 0; i < month - 1; i++)
		day_of_year += days_in_month[i];

	day_of_year += day;
	return day_of_year;
}

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	int leap_year = is_leap_year(year);
	int day_of_year = get_day_of_year(month, day, leap_year);
	int days_in_year = 365 + leap_year;

	if (month < 1 || month > 12 || day < 1 || day > 31)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}

	if (day_of_year > days_in_year)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}

	printf("Day of the year: %d\n", day_of_year);
	printf("Remaining days: %d\n", days_in_year - day_of_year);
}

