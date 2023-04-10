#include <unistd.h>

/**
 * _putchar - writes character c to stdout library
 * @c: The character to print
 *
 * Return: 1 for success.
 * And -1 for error, set errno
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
