#include "main.h"

/**
 * array_range - function that creates an array of integers
 *
 * @min: character to print
 * @max: character to print
 *
 * Return: 0 Success
 *
*/

int *array_range(int min, int max)
{
	int i, *ar;

	if (min > max)
		return (NULL);

	ar = malloc((max - min + 1) * sizeof(int));
	if (ar == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		ar[i] = min;
		min++;
	}
	return (ar);
}
