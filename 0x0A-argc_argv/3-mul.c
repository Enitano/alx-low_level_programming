#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: size of args
 * @argv: array of args
 * Return: 0 success , 1 otherwise
 */

int main(int argc, char **argv)
{
	int index, mul;

	mul = 1;
	if (argc < 3)
	{
		printf("Error\n");

		return (1);
	}
	for (index = 1; index < argc; index++)
	{
		mul = mul * atoi(argv[index]);
	}
	printf("%d\n", mul);

	return (0);
}
