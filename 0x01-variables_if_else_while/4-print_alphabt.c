#include <stdio.h>

/**
 *main - print all alphabets
 *except q & e
 *Return: Always 0 (Success)
 */

int main(void)
{
	char A = 'a';
	
	while (A <= 'z')
	{
		if (A != 'e' && A != 'q')
			putchar(A);

	}
		A++
	putchar('\n');

	return (0);

}
