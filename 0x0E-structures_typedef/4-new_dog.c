#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - entry point
 *
 * description - a function that creates a new dog.
 *
 * @name: The character to print
 * @age: The character to print
 * @owner: The character to print
 *
 * Return: Always 0 (Success)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, l = 0, k = 0;
	dog_t *d;

	while (name[l] != '\0')
		l++;
	while (owner[k] != '\0')
		k++;
	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}

	d->name = malloc(l * sizeof(d->name));
	if  (d->name == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (i = 0; i <= l; i++)
		d->name[i] = name[i];
	d->age = age;

	d->owner = malloc(k * sizeof(d->owner));
	if (d->owner == NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
		return (NULL);
	}
	for (i = 0; i <= k; i++)
		d->owner[i] = owner[i];

	return (d);
}
