#include <stdlib.h>
#include "lists.h"
/**
 * find_listint_loop_fl - loop to be found
 * @head: finds loop
 * Return: address of node, else NULL if no loop
 */
listint_t *find_listint_loop_fl(listint_t *head)
{
listint_t *first, *last;
if (head == NULL)
return (NULL);
for (last = head->next; last != NULL; last = last->next)
{
if (last == last->next)
return (last);
for (first = head; first != last; first = first->next)
if (first == last->next)
return (last->next);
}
return (NULL);
}
/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer that frees list of a loop
 * Return: size of the list
 */
size_t free_listint_safe(listint_t **h)
{
int loop = 1;
size_t l;
listint_t *next, *temp;
if (h == NULL || *h == NULL)
return (0);
temp = find_listint_loop_fl(*h);
for (l = 0; (*h != temp || loop) && *h != NULL; *h = next)
{
l++;
next = (*h)->next;
if (*h == temp && loop)
{
if (temp == temp->next)
{
free(*h);
break;
}
l++;
next = next->next;
free((*h)->next);
loop = 0;
}
free(*h);
}
*h = NULL;
return (l);
}
