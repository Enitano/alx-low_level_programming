#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @src: string to append
 * @dest: primary string
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_l = 0;

	while (dest[index++])
	{
		dest_l++;
	}

	for (index = 0; src[index]; index++)
	{
		dest[dest_l++] = src[index];
	}
	return (dest);
}
