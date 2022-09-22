#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a:array of integers
 * @n: number of elements to swap in array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp, index;

	for (index = n - 1; index > n / 2; index--)
	{
		temp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = temp;
	}
}
