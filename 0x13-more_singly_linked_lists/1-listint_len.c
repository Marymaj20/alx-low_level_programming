#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: linked list of type listint_t to travers
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t total = 0;

	while (h)
	{
		total++;
		h = h->next;
	}

	return (total);
}
