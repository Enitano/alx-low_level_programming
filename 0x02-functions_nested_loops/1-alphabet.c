#include "main.h"

/**
 *main - Print alphabet in lower case
 *Using my header file
 *Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char A;

	for (A = 'a'; A <= 'z'; A++)
	{
		_putchar(A);
	}
	_putchar('\n');

	return (0);
}
