#include "lists.h"
#include <stdlib.h>
/**
 * print_list - prints all elements of a list_t list
 * @h: list_t
 * Return: size-t
 */


size_t print_list(const list_t *h)
{

	size_t i;

	if (!h)
		return (0);

	for (i = 0; h; i++)
	{

		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;

	}

	return (i);

}
