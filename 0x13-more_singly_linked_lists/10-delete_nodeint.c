#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a linked lists
 * @head: input first element
 * @index: index of the node that should be deleted
 * Return:1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int s = 0;
listint_t *current_node = NULL;
listint_t *temp_node = *head;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(temp_node);
return (1);
}
while (s < index - 1)
{
if (!temp_node || !(temp_node->next))
return (-1);
temp_node = temp_node->next;
s++;
}
current_node = temp_node->next;
temp_node->next = current_node->next;
free(current_node);
return (1);
}
