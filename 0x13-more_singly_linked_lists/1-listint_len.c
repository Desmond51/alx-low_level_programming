#include "lists.h"

/**
 * The listint_len will returns the number of elements in
 * a linked list.
 *
 * return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
