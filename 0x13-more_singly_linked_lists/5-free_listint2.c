#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list
 * @head: linked lists to be frred
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
listint_t *temp_node;
if (head == NULL)
return;
while (*head)
{
temp_node = (*head)->next;
free(*head);
*head = temp_node;
}
*head = NULL;
}
