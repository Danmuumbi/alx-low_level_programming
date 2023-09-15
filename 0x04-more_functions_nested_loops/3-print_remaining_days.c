#include "main.h"

/**
* print_remaining_days - Takes a date and prints the days remaining in the year.
* @month: Month (1-12)
* @day: Day (1-31)
* @year: Year (non-negative)
*/

void print_remaining_days(int month, int day, int year)
{
	int days_left = 0;

	if (year % 4 == 0)
	{
		if (year % 100 != 0 || (year % 100 == 0 && year % 400 == 0))
		{
			for (int i = month + 1; i <= 12; i++)
			{
				days_left += days_in_month(i, year);
			}
			days_left += 29 - day;  // Subtracting the days passed in February.
		}
	}
	else
	{
		for (int i = month + 1; i <= 12; i++)
		{
			days_left += days_in_month(i, year);
		}
		days_left += 28 - day;  // Subtracting the days passed in February.
	}

	printf("Day of the year: %d\n", day_of_year(month, day, year));
	printf("Remaining days: %d\n", days_left);
}

