#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newnode;
	listint_t *tempnode = *head;
/*memory is dynamically allocated to newnode using malloc*/

	newnode = malloc(sizeof(listint_t));
	if (!newnode || !head)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
/*the loop iterates until the desired index is reached*/

	for (i = 0; tempnode && i < idx; i++)
	{
		if (i == idx - 1)
		{
			newnode->next = tempnode->next;
			tempnode->next = newnode;
			return (newnode);
		}
		else
			tempnode = tempnode->next;
	}

	return (NULL);
}
