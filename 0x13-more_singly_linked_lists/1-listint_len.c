#include "lists.h"

/**
 * listint_len -func that returns the number of elements in a linked list.
 * @h: header
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (header != NULL)
	{
	header = header->next;
	count++;
	}
	return (count);
}
