#include "main.h"
/**
 * rev_string - reverses a string
 *
 * @s: character to  print
 *
 * Return: (0) Success!
*/

void rev_string(char *s)
{
	int h, i;
	char c;

	for (h = 0; s[h] != '\0'; h++)
		;

	/*swaps the string by looping to half the string*/
	for (i = 0; i < h / 2; i++)
	{
		c = s[i];
		s[i] = s[h - 1 - i];
		s[h - 1 - i] = c;
	}

}
