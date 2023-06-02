#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked list_t list
 * @h: pointer to the first node
 * Return: the size of list
 */
size_t list_len(const list_t *h)
{
size_t y = 0;
while (h)
{
h = h->next;
y++;
}
return (y);
}
