#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
    size_t count = 0;
    const listint_t *current = h;

    while (header != NULL)
    {
        printf("%d\n", header->n);
        header = header->next;
        count++;
    }

    return (count);
}

