#include "main.h"

/**
 * _strlen - count array
 * @a: array of elements
 * Return: 1
 */

int _strlen(char *a)
{
	unsigned int i;

	i = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - copy arrays
 * @src: primary array
 * @dest: copy of arrays
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strdup -returns a pointer to a new string which is a
 * duplicate of the string str
 * @str: string to duplicate
 * Return: ptr to str duplicate
 */

char *_strdup(char *str)
{
	char *dst;
	unsigned int size;

	if (str == 0)
	{
		return ('\0');
	}
	size = _strlen + 1;
	dst = (char *) malloc(size * sizeof(char));

	if (dst == 0)
	{
		return ('\0');
	}
	_strcpy(dst, src);
	return (dst);
}
