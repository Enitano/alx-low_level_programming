#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	while (*s)
	{ 
		s++;
		if (*s == accept)
			count++;
	}
	return (count);
}
