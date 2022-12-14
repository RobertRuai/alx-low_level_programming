#include"main.h"

/**
 * times_table - a function that prints the 9 times table
*/

void times_table(void)
{
	int i, j, r;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			r = i * j;
			if (r <= 9)
				_putchar(' ');
			else
				_putchar((r / 10) + 48); /*1st digit */
			_putchar((r % 10) + 48); /* 2nd digit */
		}
		_putchar('\n');
	}
}
