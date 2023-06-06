#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a linked lists
 * @head: input first element of a linked lists
 * Return: the head node’s data ) else 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int n;
if (!head || !*head)
return (0);
temp = (*head)->next;
n = (*head)->n;
free(*head);
*head = temp;
return (n);
}
