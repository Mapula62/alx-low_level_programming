#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - a function that frees a listint_t list
 * @head: linked lists to be free
 * Return: nothing
 */
void free_listint(listint_t *head)
{
listint_t *temp_node;
while (head)
{
temp_node = head->next;
free(head);
head = temp_node;
}
}
