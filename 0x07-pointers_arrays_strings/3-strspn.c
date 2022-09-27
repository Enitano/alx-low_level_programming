#include "main.h"

/**
 * _strspn- gets the length of a prefix substring
 * @s: string
 * @accept: string
 * Return: void
 */

unsigned int _strspn(char *s, char *accept)
{
	while (*s)
	{
		s++;
		if (*s == accept)
			count++;
	}
	return (count);
}
