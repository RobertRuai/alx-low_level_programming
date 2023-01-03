#include "main.h"
#include <stdio.h>
/**
 *print_diagsums- prints the sum of the two diagonals of a square matrix.
 *@a:character to print
 *@size:character to print
 *
 *Return: 0 suucces.
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += *((a + i * size) + j);
			if ((i + j) == (size - 1))
				sum2 += *((a + i * size) + j);
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
