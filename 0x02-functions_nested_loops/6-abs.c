#include "main.h"

/**
 *  _abs - entry point
 *
 * @i: The character to print
 *
 * description - a function that computes absolute value of integer.
 *
 * Return: Always 0 (Success)
 */
int _abs(int i)
{

	if (i < 0)
		i = (-1) * i;
	return (i);
}
