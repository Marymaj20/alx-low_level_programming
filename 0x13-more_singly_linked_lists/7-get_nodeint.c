#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 * Return: pointer to the node we're looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tempnode = head;
/*loop iterates through the linked list until temp becomes NULL*/
/*or i is equal to the specified index*/
	while (tempnode && i < index)
	{
		tempnode = tempnode->next;
		i++;
	}
/*tempnode is not NULL indicates that the specified index was found*/

	return (tempnode ? tempnode : NULL);
}
