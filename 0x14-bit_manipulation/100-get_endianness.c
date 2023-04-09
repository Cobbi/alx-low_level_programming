#include "main.h"

/**
 * get_endianness - checks if a machine char is small or big endian
 * Return: 0 for big and 1 for little
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *ch = (char *) &j;

	if (*ch)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
