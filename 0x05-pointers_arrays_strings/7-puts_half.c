#include "main.h"

/**
 * puts_half - entry point
 *
 * description - prints half of a string
 *
 * @str: The character to print
 *
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;

	if (i % 2 == 0)
	{
		for (j = i / 2; str[j] != '\0'; j++)
			_putchar(str[j]);
	} else
	{
		for (j = ((i - 1) / 2) + 1; str[j] != '\0'; j++)
			_putchar(str[j]);
	}
	_putchar('\n');
}
