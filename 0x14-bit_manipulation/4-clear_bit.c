#include "main.h"

/**
 * clear_bit - sets the value of bit to 0
 * @n: change pointer of the number
 * @index: clear index of the bit
 *
 * Return: 1 for success or  -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = (~(1UL << index) & *n);
	return (1);
}
