#include "main.h"

/**
 * _puts_recursion - entry point
 *
 * description -  function that prints a string, followed by new line
 *
 * @s: The character to print
 *
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
