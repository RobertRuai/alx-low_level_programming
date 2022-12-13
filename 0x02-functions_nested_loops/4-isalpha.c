#include "main.h"

/**
 *   _isalpha - entry point
 *
 * @c: The character to print
 *
 * description - a function that checks for lowercase, uppercase character c.
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
