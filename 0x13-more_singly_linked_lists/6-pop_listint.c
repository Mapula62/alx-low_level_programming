#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a linked lists
 * @head: input first element of a linked lists
 * Return: the head node’s data ) else 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
int sum;
listint_t *temp_node;
if (!head || !*head)
return (0);
sum = (*head)->n;
temp_node = (*head)->next;
free(*head);
*head = temp_node;
return (sum);
}
