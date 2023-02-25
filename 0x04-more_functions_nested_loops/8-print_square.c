#include "main.h"
/**
*print_square - Prints squares
*@size: size of the square
*Return: \n if size is 0 or else
*/
void print_square(int size)
{
int c, i;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (c = 0; c < size; c++)
{
for (i = 0; i < size; i++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
