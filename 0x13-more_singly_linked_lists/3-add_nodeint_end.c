#include "lists.h"
/**
 * add_nodeint_end - adds new node at the end of a linked lists
 * @head: input first element pointer of the lists
 * @n: input data of the first element
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new = malloc(sizeof(listint_t));
listint_t *temp;
if (!head || !new)
return (NULL);
new->next = NULL;
new->n = n;
if (!*head)
*head = new;
else
{
temp = *head;
while (temp->next)
temp = temp->next;
temp->next = new;
}
return (new);
}
