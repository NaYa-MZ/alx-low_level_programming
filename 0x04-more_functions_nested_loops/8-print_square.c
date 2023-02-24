#include "main.h"
/**
*print_square - Prints squares
*@size: size of the square
*@#: x'ter to be printed
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
for (c = 1; c <= size; c++)
{
_putchar('#');
for (i = 1; i <= size; i++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
