#include "main.h"

/**
 * print_numbers - Entry point
 *
 * Description - print numbers 0-9
 *
 * Return: Always 0 (Success)
*/

void print_numbers(void)
{
	int i = 48;

	while (i <= 57)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
