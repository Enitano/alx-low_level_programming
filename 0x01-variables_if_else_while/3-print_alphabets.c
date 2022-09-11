#include <stdio.h>

/**
 *main - Print lowercase and uppercase alphabets
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char A;

	for (A = 'A'; A <= 'Z'; A++)
	{
		putchar(A);
		putchar(tolower(A));

	}
	putchar('\n');
	return (0);

}
