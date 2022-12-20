#include "main.h"

/**
 * _puts - entry point
 *
 * description -  function that prints a string, followed by new line
 *
 * @str: The character to print
 *
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
