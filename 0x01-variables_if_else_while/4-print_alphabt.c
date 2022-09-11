#include <stdio.h>

/**
 *main - print all alphabets
 *except q & e
 *Return: Always 0 (Success)
 */

int main(void)
{
	char A;
	
	for (A = 'a'; A <= 'z'; A++)
	{

		if(A = 'e')
			putchar(A++);
		if(A = 'q')
			putchar(A++);
		putchar(A);

	}
		
	putchar('\n');

	return (0);

}
