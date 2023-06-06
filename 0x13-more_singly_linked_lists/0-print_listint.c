#include "lists.h"

/**
 * print_listint - takes a pointer to the head of a linked list
 * @h: linked list of type listint_t to print
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	/* Initialize a counter to keeep track of the number of nodes */
	size_t num = 0;

	while (h) /* It continues as long as h != NULL */
	{
		printf("%d\n", h->n);
		/* It is incremented to keep track of the number of nodes of nodes */
		total++;
		h = h->next;
	}

	return (total); /* Returns the number of nodes printed */
}
