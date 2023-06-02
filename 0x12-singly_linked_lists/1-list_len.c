#include <stdlib.h>
#include "lists.h"

/**
* list_len - returns the exact number of elements in list_t
* @h: the pointer to the list_t list
* Return: the exact number of elements in h
*/

size_t list_len(const list_t *h)
{
size_t m = 0;

while (h)
{
m++;
h = h->next;
}
return (m);
}
