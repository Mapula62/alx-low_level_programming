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
list_t *temp;
unsigned int len = 0;
while (str[len])
len++;
temp = malloc(sizeof(list_t));
if (!temp)
return (NULL);
temp->str = strdup(str);
temp->len = len;
temp->next = (*head);
(*head) = temp;
return (*head);
}
