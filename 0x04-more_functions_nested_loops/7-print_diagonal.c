#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times to print
 * Return: 0
 */

void print_diagonal(int n)
{
	int Lt, Sp;

/*
 * Lt - length
 * Sp - Space
 */

	if (n > 0)
	{
		for (Lt = 0; Lt < n; Lt++)
		{
			for (Sp = 0; Sp < Lt; Sp++)
			{
				_putchar(' ');
			}
			_putchar('\\');

			if (Lt == (n - 1))
			{
				continue;
			}
			_putchar('\n');
		}
	}
