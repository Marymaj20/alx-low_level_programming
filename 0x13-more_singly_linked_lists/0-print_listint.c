#include <stdio.h>
#include "lists.h"

/**
 *@h: linked list of type listint_t to be printed
 *print_listint - prints all the elements of the required linked list
 *Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *recent = h;
	size_t total = 0;

	while (recent != NULL)
	{
		printf("%d\n", recent->n);
		total++;
		recent = recent->next;
	}

	return (total);
}
