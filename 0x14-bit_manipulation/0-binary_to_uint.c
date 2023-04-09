#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts binary number to unsigned int.
 *
 * @b: String contains the binary number.
 *
 * Return: The converted number, or 0 if there was an error.
 */
unsigned int binary_to_uint(const char *bin)
{
	int j;
	unsigned int deci_val = 0;

	if (bin == NULL)
	{
		return (0);
	}

	for (j = 0; bin[j] != '\0'; j++)
	{
		if (bin[j] < '0' || bin[j] > '1')
		{
			return (0);
		}
		deci_val = 2 * deci_val + (bin[j] - '0');
	}

	return (deci_val);
}
