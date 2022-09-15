#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @a: integer to check last digit
 * Return: value of last digit
 */

int print_last_digit(int a)
{
	int i;

	if (a < 0)
	{
		a = -a;
	}
	i = a % 10;

	if (i < 0)
	{
		i = -i;
	}
	_putchar(i + '0');

	return (i);
}
