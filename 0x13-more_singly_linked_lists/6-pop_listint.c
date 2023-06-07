#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tempnode;
	int total;

	if (!head || !*head)
		return (0);
/*returns 0 indicates an empty list*/
	total = (*head)->n;
	tempnode = (*head)->next;
	free(*head);/*memory occupied by head is freed*/
	*head = tempnode;
/*returns the value stored in the deleted head node*/
	return (total);
}
