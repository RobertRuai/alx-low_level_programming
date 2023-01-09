#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * description - a program that prints the number of arguments passed into it
 *
 * @argc: The character to print
 * @argv: The character to print
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
