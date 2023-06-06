#include "lists.h"
/**
 * listint_len - returns the num of elements in a linked lists
 * @h: input number of linked lists
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t l = 0;
while (h)
{
h = h->next;
l++;
}
return (l);
}
