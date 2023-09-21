#include "lists.h"
/**
 * list_len -  returns the number of elements in a linked list_t list
 * @h: head
*/
size_t list_len(const list_t *h)
{
	unsigned long int n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
