#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all  numbers 0-9
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		printf("%i", i);
		++i;
	}
	printf("\n");

	return (0);
}
