#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: prints linked lists
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t sum = 0;
if (h)
{
printf("%d\n", h->n);
sum++;
h = h->next;
}
return (sum);
}
