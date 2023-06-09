#include "main.h"

/**
 * flip_bits - counts the number of bits to be changed
 * @n: first number
 * @m: second number
 * Return: the number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int maj, track = 0;
	unsigned long int recent;
	unsigned long int exc = n ^ m;

	/*this starts a loop that iterates from 63 down to 0*/
	for (maj = 63; maj >= 0; maj--)
	{
		recent = exc >> maj;
		if (recent & 1)
			track++;
	}
/*returns the number of bit changes needed to get from*/
	return (track);
}
