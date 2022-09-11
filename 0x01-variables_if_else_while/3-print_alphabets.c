#include <stdio.h>

/**
 *main - Print lowercase and uppercase alphabets
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char A;
	char a = tolower(A);

	for (A = 'A'; A <= 'Z'; A++)
	{
		putchar(A);
		putchar(a);

	}


	putchar('\n');
	return (0);

}
