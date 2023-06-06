#include "lists.h"
/**
 * add_nodeint - adds new node at the beginning of a linked lists
 * @head: input pointer to the first node
 * @n: input data to the new node
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new = malloc(sizeof(listint_t));
if (!head || !new)
return (NULL);
new->next = NULL;
new->n = n;
if (*head)
new->next = *head;
*head = new;
return (new);
}
