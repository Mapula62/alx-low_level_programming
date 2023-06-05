#include <stdlib.h>
#include "lists.h"
/**
 * free_listint_safe - a function that frees a listint_t list
 * @h: input pointer to the first node
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
size_t size = 0;
int change;
listint_t *temp_node;
if (!h || !*h)
return (0);
while (*h)
{
change = *h - (*h)->next;
if (change > 0)
{
temp_node = (*h)->next;
free(*h);
*h = temp_node;
size++;
}
else
{
free(*h);
*h = NULL;
size++;
break;
}
}
*h = NULL;
return (size);
}
