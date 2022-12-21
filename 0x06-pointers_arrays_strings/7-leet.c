#include "main.h"
/**
  * leet - a function that encodes a string into 1337
  * @s: characterto print
  *
  * Return: 0 success
  */
char *leet(char *s)
{
	int a = 0, b = 0, c = 5;
	char d[5] = {'A', 'E', 'O', 'T', 'L'};
	char e[5] = {'4', '3', '0', '7', '1'};

	while (s[a])
	{
		b = 0;

		while (b < c)
		{
			if (s[a] == d[b] || s[a] - 32 == d[b])
			{
				s[a] = e[b];
			}

			b++;
		}

		a++;
	}

	return (s);
}
