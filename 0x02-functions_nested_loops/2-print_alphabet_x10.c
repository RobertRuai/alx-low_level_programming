#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: print all  letters a-z ten times
 *
 * Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char ci = 'a';

		while (ci <= 'z')
		{
			_putchar(ci);
			ci++;
		}

		_putchar('\n');
		i++;
	}
}
