#include "main.h"

/**
 *main - Print alphabet in lower case
 *calling main header file function
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
}
