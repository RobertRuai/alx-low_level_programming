#include "main.h"

/**
 * get_endianness - a function that checks if
 *                  is little endian
 *                  or big endian
 *
 * Return: 1 if little endian or 0 if big endian
*/
int get_endianness(void)
{
	unsigned int v = 1;
	char *c = (char *) &v;

	return (c[0]);
}
