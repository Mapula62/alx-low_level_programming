#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: input first node
 * @n: input data for the new node
 * @idx: index of the list where the new node should be added
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *temp_node = *head;
listint_t *new_node;
unsigned int x;
new_node = malloc(sizeof(listint_t));
if (!new_node || !head)
return (NULL);
new_node->n = n;
new_node->next = NULL;
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
for (x = 0; temp_node && x < idx; x++)
{
if (x == idx - 1)
{
new_node->next = temp_node->next;
temp_node->next = new_node;
return (new_node);
}
else
temp_node = temp_node->next;
}
return (NULL);
}
