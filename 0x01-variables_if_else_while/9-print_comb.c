#include <stdio.h>

/**
 *main - print single digits
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int A;

	for (A = 48; A < 58; A++)
	{
		putchar(A);
		if (A != 57)
		{
			putchar(',');
			putchar(" ");
		}
	}
	putchar('\n');

	return (0);
}
