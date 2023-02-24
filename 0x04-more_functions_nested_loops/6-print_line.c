#include "main.h"
/**
*print_line - draws a straight line in a terminal
*@n: number to be entered
*Return: _ if successful: \n if otherwise
*/
void print_line(int n)
{
int c;
if (n <= 0)
{
_putchar('\n');
}
	else
	{
	for (c = 1; c <= n; c++)
	_putchar('_');
	}
_putchar('\n');
}
