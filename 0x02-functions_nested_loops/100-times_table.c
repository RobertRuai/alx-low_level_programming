#include"main.h"

/**
 * print_times_table - a function that prints the 9 times table
 *
 * @n: The character to print
*/

void print_times_table(int n)
{
	int i, j, r;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
		_putchar(48);
		for (j = 1; j <= n; j++)
		{
			_putchar(',');
			_putchar(' ');
			r = i * j;
			if (r <= 9)
				_putchar(' ');
			if (r <= 99)
				_putchar(' ');
			if (r >= 100)
			{
				_putchar((r / 100) + 48);
				_putchar((r / 10) % 10 + 48);
			} else if (r <= 99 && r >= 10)
				_putchar((r / 10) + 48); /*1st digit */
			_putchar((r % 10) + 48); /* 2nd digit */
		}
		_putchar('\n');
		}
	}
}
