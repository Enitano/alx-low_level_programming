#include "main.h"

/**
 *int _islower(int c)
 *@c- character to print
 *_islower - checks for lowercase character.
 *Returns 1 if c is lowercase
 *Returns 0 otherwise
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
