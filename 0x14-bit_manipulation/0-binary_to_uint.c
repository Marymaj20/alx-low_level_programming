#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string that contains the binary number
 * Return: the number that has been converted
 */

unsigned int binary_to_uint(const char *b)
{
	int m;
	unsigned int maj = 0;

	if (!b)
		return (0);

	for (m = 0; b[m]; m++)
	{
		if (b[m] < '0' || b[m] > '1')
			return (0);
		maj = 2 * maj + (b[m] - '0');
	}

	return (maj);
}
