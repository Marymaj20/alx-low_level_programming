#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 * Return: pointer to the first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *last = NULL;
	listint_t *next = NULL;
/*it iterates if head != NULL*/
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = last;
		last = *head;
		*head = next;
	}

	*head = last;
/*returns the updated head pointer*/
	return (*head);
}
