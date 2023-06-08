#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in the list at a given index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempnode = *head;
	listint_t *recent = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tempnode);
		return (1);
	}
/*iterates until the node before the one to be deleted is reached*/
	while (i < index - 1)
	{
		if (!tempnode || !(tempnode->next))
			return (-1);
		tempnode = tempnode->next;
		i++;
	}


	recent = tempnode->next;
	tempnode->next = recent->next;
	free(recent);

	return (1);
}
