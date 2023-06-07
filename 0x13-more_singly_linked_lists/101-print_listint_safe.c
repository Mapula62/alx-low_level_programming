#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * _locate - the memory pointer of an array
 * @size: input size of a new list
 * @list: input old list
 * @new: input new node to the list
 * Return: a pointer to a new list
 */
const listint_t **_locate(const listint_t **list, size_t size, const listint_t *new)
{
size_t a;
const listint_t **newlist;
newlist = malloc(size * sizeof(listint_t *));
if (newlist == NULL)
{
free(list);
exit(98);
}
for (a = 0; a < size - 1; a++)
newlist[a] = list[a];
newlist[a] = new;
free(list);
return (newlist);
}
/**
 * print_listint_safe - function that prints a listint_t linked lists
 * @head: a pointer to the first list
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t **list = NULL;
size_t a, sum = 0;
while (head != NULL)
{
for (a = 0; a < sum; a++)
{
if (head == list[a])
{
printf("-> [%p] %d\n", (void *)head, head->n);
free(list);
return (sum);
}
}
sum++;
list = _locate(list, sum, head);
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
free(list);
return (sum);
}
