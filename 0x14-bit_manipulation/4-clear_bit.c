#include "main.h"

/**
 * clear_bit - sets the value of any given bit to 0
 * @n: pointer to the number to change
 * @index: the index of the bit to be cleared
 * Return: 1 for success and -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
/*returns -1 to indicate an error or an invalid index*/
	return (-1);
/*this clears the bit at the given index, setting its value to 0*/
	*n = (~(1UL << index) & *n);
/*returns 1 to indicate a successful operation*/
	return (1);
}
