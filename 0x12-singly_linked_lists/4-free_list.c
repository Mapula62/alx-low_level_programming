#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - function that frees a list_t list
 * @head: pointer to free head node
 * Return: nothing
 */
void free_list(list_t *head)
{
list_t *node;
list_t *temp;
if (!head)
return;
node = head;
while (node)
{
temp = node->temp;
free(node->str);
free(node);
node = temp;
}
}
