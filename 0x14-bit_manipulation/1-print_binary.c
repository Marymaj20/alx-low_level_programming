#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to be printed in binary
 */

void print_binary(unsigned long int n)
{
	int m;/*used as a loop counter*/
	/*keeps track of the number of printed binary digits*/
	int track = 0;
	/*used to store the current bit being processed*/
	unsigned long int recent;

	for (m = 63; m >= 0; m--)
	{
		recent = n >> m;

		if (recent & 1)
		{
			_putchar('1');
			track++;
		}
		else if (track)
			_putchar('0');
	}
	if (!track)
		_putchar('0');
}
