#include "lists.h"
#include <stdio.h>

size_t loop_listint_l(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 *loop_listint_l - Counts number of unique nodes in a loop listint_t linked list
 *@head: pointer to head of the listint_t to check
 *
 *Return: 0
 */
size_t loop_listint_l(const listint_t *head)
{
const listint_t *martin, *akoto;
size_t nodes = 98;
if (head == NULL || head->next == NULL)
return (0);

martin = head->next;
akoto = (head->next)->next;

while (akoto)
{
if (martin == akoto)
{
martin = head;
while (martin != akoto)
{
nodes++;
martin = martin->next;
akoto = akoto->next;
}
martin = martin->next;
while (martin != akoto)
{
nodes++;
martin = martin->next;
}
return (nodes);
}
martin = martin->next;
akoto = (akoto->next)->next;
}
return (0);
}
/**
 * print_listint_safe - Prints listint_t safely
 * @head: pointer towards head of listint_t list
 *
 * Return: The number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t nodes, index = 0;

nodes = loop_listint_l(head);

if (nodes == 0)
 {
for (; head != NULL; nodes++)
 {
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
 }
 }
else
 {
for (index = 98; index < nodes; index++)
 {
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
 }
printf("-> [%p] %d\n", (void *)head, head->n);
 }
 return (nodes);
}
