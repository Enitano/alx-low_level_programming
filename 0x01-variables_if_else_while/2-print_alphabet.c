#include <stdio.h>

/**
*main - Print the each alphabet on a new line
*using putchar
*
*Return: Always 0 (Success)
*/

int main(void)
{
	char A;

	for (A = 'a'; A <= 'z'; A++)
	{
		putchar(A);
	}

	putchar('\n');
	return (0);

}
