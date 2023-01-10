#include "main.h"

/**
 * str_concat - function that concatenates
 *          two strings.
 *
 * @s1: character to print
 * @s2: character to print
 *
 * Return: (0) success
*/

char *str_concat(char *s1, char *s2)
{
	int i, j, l = 0, k = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[l] != '\0')
		l++;
	while (s2[k] != '\0')
		k++;
	s = malloc((l * sizeof(char)) + (k + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
		s[i++] = s2[j];

	s[i] = '\0';
	return (s);
}
