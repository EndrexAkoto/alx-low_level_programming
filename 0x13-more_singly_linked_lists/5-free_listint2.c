#include "lists.h"

/**
 * free_listint_2 - frees linked list
 * @head: pointer listint_t list to be freed
 */

void free_listint2(listint_t **head)
{
 listint_t *tmp;

 if (head == NULL)
 return;

 while (*head)
 {
 tmp = (*head)->next;
 free(*head);
 *head = tmp;
 }

 *head = NULL;
}
