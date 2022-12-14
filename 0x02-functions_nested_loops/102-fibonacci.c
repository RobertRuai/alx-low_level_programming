#include <stdio.h>

/**
 * main - entry point
 *
 * description - a program that prints the first 50 Fibonacci numbers
 *
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long a, b, sum;
	int counter;

	a = 0;
	b = 1;
	for (counter = 0; counter < 50; counter++)
	{
		sum =  a + b;
		printf("%lu", sum);
		a = b;
		b = sum;
		if (counter == 49)
		{
			printf("\n");
		}
		else
			printf(", ");
	}

	return (0);
}
