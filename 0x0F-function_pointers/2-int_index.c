#include "function_pointers.h"

/**
 * int_index- entry point
 *
 * description - a function that searches for an integer.
 *
 * @array: The character to print
 * @size: The character to print
 * @cmp: The character to print
 *
 * Return: Always 0 (Success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
