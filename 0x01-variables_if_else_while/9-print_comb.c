#include <stdio.h>

/**
 *main - print single digits
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int A;

	for (A = 0; A < 10; A++)
	{
		putchar(A);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
