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
	size_t i = 0;

	if (!array || size <= 0)
		return (-1);

	while (i < size)
	{
		printf("value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
