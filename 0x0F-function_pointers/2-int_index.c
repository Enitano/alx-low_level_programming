#include "function_pointers.h"

/**
 * int_index -searches for an integer
 * @array: array to search
 * @cmp: pointer
 * @size: number of elements in the array
 * Return: -1 if no element match or size <= 0 and index
 * if cmp does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}

	}
	return (-1);
}
