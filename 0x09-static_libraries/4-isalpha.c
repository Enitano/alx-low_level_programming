#include "main.h"

/**
 *_isalpha - checks for alphabetic character.
 *@c: character to check
 *Return: 1 if c is a letter, lowercase or uppercase
 *Returns 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'z') || (c >= 'a' && c <= 'z'));
}
