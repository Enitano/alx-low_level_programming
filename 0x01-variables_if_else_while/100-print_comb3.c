#include <stdio.h>

/**
 *main - print possible combination
 *of 2 numbers
 *Return: Always 0 (0)
 */

int main(void)
{
	int A, B;

	for (A = 48; A < 58; A++)
	{
		for (B = 48; B < 58; B++)
		{
			putchar(A);
			putchar(B);
			putchar(',');
		}
	}
	putchar('\n');

	return (0);
}
