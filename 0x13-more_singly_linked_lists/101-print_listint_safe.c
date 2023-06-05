#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
size_t print_listint_safe(const listint_t *head);
size_t looped_listint_len(const listint_t *head);
/**
 * looped_listint_len - number of nodes to be counted
 * @head: input pointer to the head checked
 * Return: pointer to the head of the linked lists
 */
size_t print_listint_safe(const listint_t *head)
{
size_t nodes = 1;
const listint_t *hare, *tortoise;
if (head == NULL || head->next == NULL)
return (0);
hare = (head->next)->next;
tortoise = head->next;
while (hare)
{
if (tortoise == hare)
{
tortoise = head;
while (tortoise != hare)
{
nodes++;
tortoise = tortoise->next;
while (tortoise != hare)
{
nodes++;
tortoise = tortoise->next;
}
return (nodes);
}
tortoise = tortoise->next;
hare = (hare->next)->next;
}
return (0);
}
/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: input pointer to the head of linked lists
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t nodes, index = 0;
nodes = looped_listint_len(head);
while (nodes == 0)
{
for (; head != NULL; nodes++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}
else
{
for (index = 0; index < nodes; index++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
printf("-> [%p] %d\n", (void *)head, head->n);
}
return (nodes);
}
