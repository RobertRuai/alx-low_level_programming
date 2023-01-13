#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - entry point
 *
 * description - a function that allocates memory using malloc
 *
 * @b: The character to print
 *
 *
 * Return: Always 0 (Success)
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
