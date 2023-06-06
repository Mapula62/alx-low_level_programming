#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list
 * @head: linked lists to be frred
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
listint_t *temp, *node;
if (!head)
return;
node = *head;
while (node)
{
temp = node;
node = node->next;
free(temp);
}
*head = NULL;
}
