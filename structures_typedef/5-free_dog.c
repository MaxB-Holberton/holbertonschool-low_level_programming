#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free dog
 * @d: dog
 *
 * Return: dog_t
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	d->owner = NULL;
	free(d->name);
	d->name = NULL;
	free(d);
	d = NULL;
}
