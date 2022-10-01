#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s:point to memory
 * @b:constant byte
 * @n:bytes of memory
 *Return: pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
