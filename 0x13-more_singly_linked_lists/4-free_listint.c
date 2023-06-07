#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *tempnode;
/*frees each node until head becomes NULL*/
	while (head)
	{
		tempnode = head->next;
/*head node is freed using the free function*/
		free(head);
		head = tempnode;
	}
}
