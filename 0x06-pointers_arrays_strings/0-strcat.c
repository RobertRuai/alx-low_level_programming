/**
 * _strcat - function that concatenates
 *          two strings.
 *
 * @dest: character to print
 * @src: character to print
 *
 * Return: (0) success
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;

	for (j = 0; src[j] ; j++)
		dest[i++] = src[j];

	return (dest);
}
