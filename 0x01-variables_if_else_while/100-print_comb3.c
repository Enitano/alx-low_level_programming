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
			if (B > A)
			{
				putchar(A);
				putchar(B);
				if (A != 56 || B != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');

	return (0);
}
