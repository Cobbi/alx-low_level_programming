#include "main.h"

/**
 * get_bit - returns the value of bit at an index in decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: the value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
	{
		return (-1);
	}

	bit_value = (n >> index) & 1;

	return (bit_value);
}
