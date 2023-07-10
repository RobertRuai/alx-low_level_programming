#include <stdio.h>

/**
 * search_arr - searches and splits array into two
 *
 * @array: character to print
 * @l: character to print
 * @r: character to print
 *
 * Return: 0 success
 */

void search_arr(int *array, size_t l, size_t r)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		if (i != r)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}



#include "search_algos.h"

/**
 * binary_search - binary searches for a value in an array of integers
 *
 * @array: character to print
 * @size: character to print
 * @value: character to print
 *
 * Return: 0 success
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t m = 0;
	size_t r = size - 1;

	if (!array || size <= 0)
		return (-1);


	while (l <= r)
	{
		search_arr(array, l, r);
		m = l + (r - 1) / 2;

		if (array[m] == value)
			return (m);
		if (array[m] < value)
			l = m + 1;
		else
			r = m - 1;
	}
	return (-1);
}
