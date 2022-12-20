/**
 * _strlen - function that returns the length of a string
 *
 * @s: character to print
 *
 * Return: always return (0) Success!
*/

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		count++;

	return (count);
}
