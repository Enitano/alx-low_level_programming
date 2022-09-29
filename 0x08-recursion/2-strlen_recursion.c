#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to count
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	sum = 0;

	if (*s == '\0')
	{
		sum++;
		sum = sum + _strlen_recursion(s + 1);
	}
}
