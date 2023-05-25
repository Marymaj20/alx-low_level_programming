#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - it prints name using pointer to function
 * @name: the string to add
 * @f: pointer to function
 * Return: nothing (success)
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
