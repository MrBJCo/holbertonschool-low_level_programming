#include "main.h"

/**
 * print_time_table - Entry point
 * @n: input
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
	int num, mult, proud;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			
			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');

				proud = num * mult;

				if (proud <= 99)
					_putchar(' ');
				if (proud <= 9)
					_putchar(' ');

				if (proud >= 100)
				{
					_putchar((proud / 100) + '0');
					_putchar(((proud / 10)) % 10 + '0');
				}
				else if (proud <= 99 && prod >= 10)
				{
					_putchar((proud / 10) + '0');
				}
				_putchar((proud % 10) + '0');
			}
		}
	}
}
