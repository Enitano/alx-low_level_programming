#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: size of args
 * @argv: array of args
 * Return: 0 success , 1 otherwise
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error");

		return (1);
	}
	int mul;

	mul = ((*arg[1]) * (*argv[2]));
	printf("%d\n", mul);

	return (0);
}
