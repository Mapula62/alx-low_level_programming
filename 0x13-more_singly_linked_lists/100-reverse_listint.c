#include <stdlib.h>
#include "lists.h"
/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: input to the pointer of thr first node
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *next_node = NULL;
listint_t *prev_node = NULL;
while (*head)
{
next_node = (*head)->next_node;
(*head)->next_node = prev_node;
prev_node = *head;
*head = next_node;
}
*head = prev_node;
return (*head);
}
