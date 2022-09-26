#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: destination memory space
 * @src: source memory area
 * @n:bytes from memory area
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
