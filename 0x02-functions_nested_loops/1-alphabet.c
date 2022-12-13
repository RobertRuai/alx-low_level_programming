#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: print all  letters a-z
 *
 * Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	char ci = 'a';

	while (ci <= 'z')
	{
		_putchar(ci);
		ci++;
	}
	_putchar('\n');
}
