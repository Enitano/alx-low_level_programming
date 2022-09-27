#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to segment
 * @accept: string
 * Return: s bytes on accepts
 */

unsigned int _strspn(char *s, char *accept)
{
	int count;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
				break;
			count++;
			accept++;
			s++;
		}
		if (*accept == '\0')
			break;
	}
	return (count + 1);
}
