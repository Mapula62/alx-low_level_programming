#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a linked lists
 * @head: input first element
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *node, *prev;
unsigned int y = 0;

if (!head || !*head)
return (-1);
if (!index)
{
node = *head;
*head = (*head)->next;
free(node);
return (1);
}
node = *head;
while (node)
{
if (y == index)
{
prev->next = node->next;
free(node);
return (1);
}
y++;
prev = node;
node = node->next;
}
return (-1);
}
