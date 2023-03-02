#include "main.h"
#include <stdio.h>
/**
 * print_buffer - funx that prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 * Return: Always void
 */
void print_buffer(char *b, int size)
{
int e;
for (e = 0; e <= (size - 1) / 10 && size; e++)
{
printf("%08x: ", e * 10);
if (e < size / 10)
{
print_line(b, 9, e);
}
else
{
print_line(b, size % 10 - 1, e);
}
putchar('\n');
}
if (size == 0)
putchar('\n');
}
