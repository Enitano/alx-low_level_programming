#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - finds the length of a string
 * @str: the string
 * Return: length of string
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - copies a string including the terminating NULL byte
 * to a buffer
 * @dest: buffer storing the copy
 * @src: source string
 * Return: pointer to string
 */

char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: dog age
 * @owner: dog owner
 * Return: NULL on failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *scooby;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	scooby = malloc(sizeof(dog_t));
	if (scooby == NULL)
		return (NULL);

	scooby->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (scooby->name == NULL)
	{
		free(scooby);
		return (NULL);
	}

	scooby->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (scooby->owner == NULL)
	{
		free(scooby->name);
		free(scooby);
		return (NULL);
	}

	scooby->name = _strcopy(scooby->name, name);
	scooby->age = age;
	scooby->owner = _strcopy(scooby->owner, owner);

	return (scooby);
}
