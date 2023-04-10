#include "lists.h"

/**
 * get_nodeint_at_index - func that returns the nth node of a list.
 * @head: pointer of the first element of the list
 * @index: the index of the node
 *  Return: pointer of Index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL &&  i < index; i++)
	{
		head = head->next;
	}
	return (head);
}
