#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node and returns its data
 * @head: a pointer to the first element of the list
 * Return: 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}

