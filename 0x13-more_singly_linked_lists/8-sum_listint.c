#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 * Return: resulting sum
 */

int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *tempnode = head;

	while (tempnode)
	{
		total += tempnode->n;
		tempnode = tempnode->next;
	}
/*returns the value of total*/
/*which is the sum of the all the elements in the linked list*/
	return (total);
}
