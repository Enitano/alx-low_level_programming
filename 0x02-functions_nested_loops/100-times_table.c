#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: size of times table
 * Return: Always 0
 */

void print_times_table(int n)
{
	int i;

	for (n = 0; n <= 15; n++)
	{
		for (i = 1; i <= 10; ++i)
		{
			printf("%d * %d = %d \n", n, i, n * i);
		}
	}
	printf('\n');
}
