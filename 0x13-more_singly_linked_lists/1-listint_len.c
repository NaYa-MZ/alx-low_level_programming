#include "lists.h"

/**
 * listint_len -function that returns the number of elements in a linked listint_t list.
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
