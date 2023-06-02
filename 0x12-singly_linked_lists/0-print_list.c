#include <stdio.h>
#include "lists.h"

/**
*print_list - prints all the elements of list_t
*@h: pointer to the list_t list to print
*Return: the exact number of nodes printed
*/

size_t print_list(const list_t *h)
{
size_t m = 0;

while (h != NULL)
{
if (h->str != NULL)
{
printf("[%u] %s\n", h->len, h->str);
}
else

{
printf("[0] (nil)\n");
}

m++;
h = h->next;
}

return (m);
}
