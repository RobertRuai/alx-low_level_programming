#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - entry point
 *
 * description -  a function that frees dogs.
 *
 * @d: The character to print
 *
 * Return: Always 0 (Success)
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
