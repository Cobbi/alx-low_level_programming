#include "main.h"

/**
 * flip_bits - counts to change the number of bits
 * from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, counts = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		current = exclusive >> j;

		if (current & 1)
		{
			counts++;
		}
	}
	return (counts);
}
