#include "main.h"

/**
 * get_endianness - checks if a machine is big or little endian
 * Return: 0 for big endian and 1 for little endian
 */

int get_endianness(void)
{
/*This allows the code to access the individual bytes of m*/
unsigned int m = 1;
	char *z = (char *) &m;
/*returns  the first byte of m*/
	return (*z);
}
