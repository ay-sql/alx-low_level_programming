#include "lists.h"
#include <stdlib.h>

/**
  *add_node - add a new node at the beginning
  *@head: list_t **
  *@str:char
  *Return: list_t
  */

list_t *add_node(list_t **head, const char *str)
{
char *s;
list_t *n;
int x, length;

if (!str || !head)
	return (NULL);

n = *head;

for (length = 0; str[length] != '\0'; length++)
	;
s = malloc(sizeof(char) * (length + 1));

if (!s)
	return (NULL);
for (x = 0; x < length; x++)
	s[x] = str[x];

n = malloc(sizeof(list_t));

if (!n)
{
	free(s);
	return (NULL);
}

n->str = s;
n->len = length;
n->next = *head;
*head = n;
return (n);



}
