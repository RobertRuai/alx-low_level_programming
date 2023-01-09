#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * description -  a program that prints its name, followed by a new line.
 *
 * @argc: The character to print
 * @argv: The character to print
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
