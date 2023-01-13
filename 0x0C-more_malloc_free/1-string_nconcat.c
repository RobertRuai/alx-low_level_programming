#include "main.h"

/**
 * string_nconcat - function that concatenates
 *          two strings.
 *
 * @s1: character to print
 * @s2: character to print
 * @n: character to print
 *
 * Return: (0) success
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, l, k;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l = k = 0;
	while (s1[l] != '\0')
		l++;
	while (s2[k] != '\0')
		k++;
	if (n >= k)
		n = k;
	s = (char *) malloc((l + n + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];

	for (j = 0; j < n && s2[j] != '\0'; j++)
		s[i++] = s2[j];

	s[i] = '\0';
	return (s);
}
