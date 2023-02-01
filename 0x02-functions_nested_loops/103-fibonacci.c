#include <stdio.h>

/**
 * main - entry point
 *
 * description - a program that prints sum of even Fibonacci numbers
 *
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int a, b, sum;
	unsigned int counter;

	a = 0;
	b = 1;
	for (counter = 0; counter < 4000000; counter++)
	{
		sum = a + b;
		printf("%u", sum);
		a = b;
		b = sum;
		if ()
		if (counter == 3999999)
		{
			printf("\n");
		}
		else
			printf(", ");
		

	}

	return (0);
}
