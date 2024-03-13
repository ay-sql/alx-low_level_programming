#include "lists.h"

/**
  *list_len - returns the number of elements
  *@h:list_t
  *Return: size_t
  */

size_t list_len(const list_t *h)
{

	size_t i;

	for (i = 0; h; i++)
		h = h->next;

	return (i);


}
