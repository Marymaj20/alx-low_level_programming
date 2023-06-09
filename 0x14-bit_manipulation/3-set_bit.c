#include "main.h"

/**
 * set_bit - sets a bit at any given index to 1
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1
 * Return: 1 for success and -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
/*returns -1 to indicate an error or an invalid index*/
	return (-1);
/*this sets the bit at the given index to 1*/
	*n = ((1UL << index) | *n);
/*returns 1 to indicate a successful operation*/
	return (1);
}
