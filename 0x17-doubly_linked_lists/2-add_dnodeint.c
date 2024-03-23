#include "lists.h"

/**
 * add_dnodeint- add node in the beginning
 * @head: dlistint
 * @n: const int
 * Return: dlistint_t
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (!head)
		return (NULL);

	if (!node)
		return (NULL);

	node->n = n;
	node->prev = NULL;

	if (!(*head))
	{
		node->next = NULL;
		*head = node;
		return (node);
	}

	node->next = *head;
	(*head)->prev = node;
	(*head) = node;
	return (node);



}

