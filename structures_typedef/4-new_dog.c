#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog: prints dog
 * @d: the dog
 *
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;
	
	return (newdog);
}
