#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - func that frees a list and sets the head to null
 * @head: a pointer to the first element of lists
 */

void free_listint2(listint_t **head)
{
listint_t *temp;

if (head == NULL)
	return;
while (*head != NULL)
	{
	temp = *head;
	head = (*head)->next;
	free(*head);

	}
*head = NULL;
}
