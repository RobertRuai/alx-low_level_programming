#include <stdio.h>

/**
 * main - entry point
 *
 * description - program that computes sum of all the multiples of 3 or 5
 *
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, sum;

	for (a = 3; a < 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
			sum = sum + a;
	}
	printf("%d\n", sum);

	return (0);
}
