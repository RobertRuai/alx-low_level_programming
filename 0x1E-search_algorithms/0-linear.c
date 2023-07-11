#include "search_algos.h"

/**
 * linear_search - linear searches for a value in an array of integers
 *
 * @array: character to print
 * @size: character to print
 * @value: character to print
 *
 * Return: 0 success
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
