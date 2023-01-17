#include "dog.h"

/**
 * init_dog - entry point
 *
 * description - Typedef for struct dog
 *
 * @d: The character to print
 * @name: The character to print
 * @age: The character to print
 * @owner: The character to print
 *
 * Return: Always 0 (Success)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
