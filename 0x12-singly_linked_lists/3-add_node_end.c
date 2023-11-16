#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - add node at the end
 * @head: list_t
 * @str: char
 * Return: list_t
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *newnode = malloc(sizeof(list_t));
	int length = 0;
	list_t *temp = *head;


	while (str[length])
		length++;

	if (!newnode)
		return (NULL);


	newnode->str = strdup(str);
	newnode->len = length;
	newnode->next = NULL;

	if (!(*head))
	{
		*head = newnode;
		return (newnode);

	}

	while (temp->next)
	{
		temp = temp->next;
	}

	temp->next = newnode;

	return (newnode);


}
