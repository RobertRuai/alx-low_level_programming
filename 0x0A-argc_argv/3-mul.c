#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * description - a program that multiplies two numbers
 *
 * @argc: The character to print
 * @argv: The character to print
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int prod;

	if (argc == 3)
	{
		prod = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", prod);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
