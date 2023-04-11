#include "Lists_h"
/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: A pointer to a pointer to the head node of the list
 * Return: A pointer to the new head node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL, *current = *head, *next;

	while (current != NULL)
	{
	next = current->next;
	current->next = prev;
	prev = current;
	current = next;
	}

	*head = prev;
	qreturn prev;
}

