#include "lists.h"
/**
  *free_list - free memory
  *@head: list_t
  *Return: always 0
  */

void free_list(list_t *head)
{
	list_t *temp;

	if (!head)
		return;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;

	}

}
