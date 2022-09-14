#include <unistd.h>

/**
 *My header file
 *_putchar prototype inside
 *Return valu
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
