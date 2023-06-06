#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: prints linked lists
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t j = 0;
while (h)
{
printf("%d\n", h->n);
j++;
h = h->next;
}
return (j);
}
