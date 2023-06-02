#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: pointer to the node
 * @str: input node
 * Return: size of the list_t list
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new = malloc(sizeof(list_t));
if (!head || !new)
return (NULL);
while (str)
{
new->str = strdup(str);
if (!new->str)
{
free(new);
return (NULL);
}
new->len = strlen(new->str);
}
new->next = *head;
*head = new;
return (new);
}
