#include "function_pointers.h"

/**
 * array_iterator - entry point
 *
 * description - a function that executes a function given as
 *		a parameter on each element of an array
 *
 * @array: The character to print
 * @action: The character to print
 * @size: The character to print
 *
 * Return: Always 0 (Success)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
