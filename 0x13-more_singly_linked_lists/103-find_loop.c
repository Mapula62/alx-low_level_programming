#include <stdlib.h>
#include "lists.h"
/**
 * find_listint_loop -  function that finds the loop in a linked list
 * @head: linked lists to be found
 * Return: address of the node where the loop starts, NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
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
