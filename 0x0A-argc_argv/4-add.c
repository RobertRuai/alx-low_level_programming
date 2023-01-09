#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * isNumber - check if string array is num
 * @num: string to check
 * Return: 0 if it's a number
 *         1 if it's not a number
*/

int isNumber(char num[])
{
	int i, l = strlen(num);

	for (i = 0; i < l; i++)
	{
		if (!isdigit(num[i]))
			return (1);
	}
	return (0);
}
/**
 * main - entry point
 *
 * description -  a program that adds positive numbers
 *
 * @argc: The character to print
 * @argv: The character to print
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (isNumber(argv[i]) == 0)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
