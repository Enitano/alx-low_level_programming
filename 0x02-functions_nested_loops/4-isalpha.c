#include "main.h"

/**
 *int _isalpha(int c) - checks for alphabetic character.
 *@c - character to check
 *Returns 1 if c is a letter, lowercase or uppercase
 *Returns 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'z') || (c >= 'a' && c <= 'z'));
}
