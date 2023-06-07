#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *tempnode;

	if (head == NULL)
		return;

	while (*head)
	{
		tempnode = (*head)->next;
		free(*head);/*memory occupied by head is freed using free()*/
		*head = tempnode;
	}
/*the loop terminates once head is NULL*/
	*head = NULL;
}
