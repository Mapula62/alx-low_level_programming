#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a linked lists
 * @head: input first node
 * Return: if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
listint_t *temp_node = head;
int num = 0;
while (temp_node)
{
num += temp_node->n;
temp_node = temp_node->next;
}
return (num);
}
