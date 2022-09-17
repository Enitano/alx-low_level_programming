#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: 0
 */

void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (a = 1; a <= size; i++)
	{
		for (b = 1; b <= size; j++)
		{
			if (b <= (size - a))
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
