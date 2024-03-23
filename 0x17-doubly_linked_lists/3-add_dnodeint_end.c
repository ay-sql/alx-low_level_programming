#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of list
 * @head: dlistint_t
 * @n: const int
 * Return: dlistint_t
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (!head)
		return (NULL);
	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (!(*head))
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}

	while (temp->next)
	{
		temp = temp->next;
	}

	node->prev = temp;
	temp->next = node;
	return (node);



}
