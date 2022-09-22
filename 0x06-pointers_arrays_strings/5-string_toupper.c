#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: sting to change
 */

char *string_toupper(char *)
{
	int index = o;

	while (str[index++])
	{
		if (str[index++] > 'a' && str[index] <= 'z')
			str[index] -= 32;
	}
	return (str);
}
