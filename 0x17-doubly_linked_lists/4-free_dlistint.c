#include "lists.h"

/**
 * free_dlistint - free list
 * @head: dlistint_t
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (head)
	{

		temp = head;
		head = head->next;
		free(temp);

	}
}
