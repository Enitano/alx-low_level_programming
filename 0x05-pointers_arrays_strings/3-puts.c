#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 * Return: void
 */

void _puts(char *str)
{
	while (*str)
	{
		_puts(char *str++);
	}
	_putchar('\n');
}
