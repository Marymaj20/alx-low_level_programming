#include <stdlib.h>
#include "lists.h"

/**
* free_list - frees list_t
* @head: the list_t list to be freed
*/
void free_list(list_t *head)
{
list_t *maj;

while (head)
{
maj = head->next;
free(head->str);
free(head);
head = maj;
}
}
