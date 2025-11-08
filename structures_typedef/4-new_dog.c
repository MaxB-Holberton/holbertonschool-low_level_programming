#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - gets the length of a string
 * @str: the string to check
 *
 * Return: length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
	{}
	return (i);
}

/**
 * _strcpy - copy a string
 * @dest: destination
 * @src: source
 *
 * Return: Pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - New dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	unsigned int name_len;
	unsigned int owner_len;

	if (name == NULL)
		return (NULL);
	if (owner == NULL)
		return (NULL);

	name_len = _strlen(name) + 1;
	owner_len = _strlen(owner) + 1;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	newdog->name = malloc(sizeof(char) * name_len);
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->owner = malloc(sizeof(char) * owner_len);
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}

	newdog->name = _strcpy(newdog->name, name);
	newdog->age = age;
	newdog->owner = _strcpy(newdog->owner, owner);

	return (newdog);
}

