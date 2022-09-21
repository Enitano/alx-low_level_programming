#include "main.h"

/**
 * _strncpy - function that copies a string
 * @src: string to copy
 * @dest: Primary string
 * @n: integer 
 * Return: new dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = o; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
