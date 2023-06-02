#include <stdio.h>

void maj(void) __attribute__ ((constructor));

/**
* maj - prints a sentence before the main function
*/
void maj(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
