#include "main.h"

/**
 *  _islower - entry point
 *
 * @c: The character to print
 *
 * description - a function that checks for lowercase character c.
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
