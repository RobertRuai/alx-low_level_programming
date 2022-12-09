#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print base16 numbers in lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 48;

	while (i <= 102)
	{
		putchar(i);

		if (i == 57)
			i += 39;
		i++;
	}
	putchar('\n');

	return (0);
}
