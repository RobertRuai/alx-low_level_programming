#include <stdio.h>

/**
 * main - entry point
 *
 * description - a program that prints name of file it was compiled from
 *
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
