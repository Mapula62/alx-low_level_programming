#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: input first node
 * @index: is the index of the node, starting at 0
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *temp_node = head;
unsigned int s = 0;
while (temp_node && s < index)
{
temp_node = temp_node->next;
s++;
}
return (temp_node ? temp_node : NULL);
}
