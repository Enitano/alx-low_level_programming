#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: primary string
 * @src: string to concatenate
 * @n: integer  allocation
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_l = 0;

	while (dest[index++])
	{
		dest_l++;
	}
	for (index = 0; src[index] && index < n; index++)
	{
		dest[dest_l++] = src[index];
	}
	return (dest);
}
