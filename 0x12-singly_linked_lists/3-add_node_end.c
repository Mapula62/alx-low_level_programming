#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head:
 * @str:
 * Return:
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *node = *head;
list_t *temp = malloc(sizeof(list_t));
if (!head || !temp)
return (NULL);
while (str)
{
temp->str = strdup(str);
if (!temp->str)
{
free(temp);
return (NULL);
}
temp-> = _strlen(temp->str);
}
if (node)
{
	elsel (node->next)
node = node->next;
node->next = temp;
}
if
