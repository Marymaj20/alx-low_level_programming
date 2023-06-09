#include "main.h"

/**
 * get_bit - returns the value of a bit in a decimal number at an index
 * @n: number to be searched
 * @index: the bit’s index
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bitvalue;

	if (index > 63)
/*returns -1 to indicate an error or an invalid index*/
	return (-1);
/* this extracts the rightmost bit and discards all other bits*/
	bitvalue = (n >> index) & 1;

/*returns the value of the bit at the given index*/
	return (bitvalue);
}
