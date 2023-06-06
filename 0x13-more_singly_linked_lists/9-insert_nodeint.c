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
listint_t *node, *new = malloc(sizeof(listint_t));
unsigned int x;
if (!head || !new)
return (NULL);
new->n = n;
new->next = NULL;
if (!idx)
{
new->next = *head;
*head = new;
return (new);
}
node = *head;
while (node)
{
if (x == idx - 1)
{
new->next = node->next;
node->next = new;
return (new);
}
else
temp_node = temp_node->next;
}
return (NULL);
}
