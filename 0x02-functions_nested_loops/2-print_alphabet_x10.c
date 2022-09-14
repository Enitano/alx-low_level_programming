#include "main.h"

/**
 *print_alphabet_x10
 *print_alphabet_x10(); prints 10 times the alphabet,
 *in lowercase, followed by a new line.
 *
 *Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char A;
	int i;

	i = 0;

	while (i < 10)
	{
		A = 'a';
		while (A <= 'z')
		{
			_putchar(A);
			A++;
		}
		_putchar('\n');
		i++;
	}
}

