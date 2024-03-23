#include "lists.h"

/**
 * dlistint_len - number of elements in list
 * @h: const dlistint_t
 * Return: len
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);

}
