#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: pointer to the list_t list
 * @str: input string
 * Return: size of the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
unsigned int len = 0;
list_t *node;
list_t *new = *head;
while (str[len])
len++;
node = malloc(sizeof(list_t));
if (!node)
return (NULL);
node->str = strdup(str);
node->len = len;
node->next = NULL;
if (*head == NULL)
{
*head = node;
return (node);
}
while (new->next)
new = new->next;
new->next = node;
return (node);
}
