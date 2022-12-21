/**
 * _strncat - function that concatenates
 *          two strings.
 *
 * @dest: character to print
 * @src: character to print
 * @n : character to print
 *
 * Return: (0) success
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';

	return (dest);
}
