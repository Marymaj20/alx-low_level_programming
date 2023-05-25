#include "function_pointers.h"
/**
 * int_index - it returns index place if comparison = true, else -1
 * @array: an array
 * @size: the size of elements in an array
 * @cmp: pointer to func of one of the 3 in main
 * Return: 0 (success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (m = 0; m < size; m++)
	{
		if (cmp(array[m]))
			return (m);
	}
	return (-1);
}
