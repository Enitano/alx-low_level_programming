#include "main.h"

/**
 * _strlen - count arrays
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
 * str_concat - concatenates two strings
 * @s1: str 1
 * @s2: str 2
 * Return: ptr to *s1
 */

char *str_concat(char *s1, char *s2)
{
	char *dst;
	unsigned int a, b, size;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	size = (_strlen(s1) + _strlen(s2) + 1);

	dst = (char *) malloc(size * sizeof(char));

	if (dst == 0)
	{
		return (NULL);
	}
	for (a = 0; *(s1 + a) != '\0'; a++)
	{
		*(dst + a) = *(s1 + a);
	}
	for (b = 0; *(s2 + b) != '\0', b++)
	{
		*(dst + a) = *(s2 + b);
		a++;
	}
	return (dst);
}
