#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;/*this holds the newly created node */
	listint_t *tempnode = *head;/* it is used to traverse the linked list */
/* memory is allocated to newnode using malloc */
	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);/* returns NULL once memory allocation fails */

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
/* the function traverses the list till it reaches the last node */
	while (tempnode->next)
		tempnode = tempnode->next;

	tempnode->next = newnode;

	return (newnode);
}
