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
freee(*h);
break;
}
l++;
next = next->next;
free((*h)->next);
loop = 0;
}
free(*h);
