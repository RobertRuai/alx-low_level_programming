#include "main.h"

/**
 *  _isdigit - entry point
 *
 * @c: The character to print
 *
 * description - a function that checks for digits c.
 *
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
