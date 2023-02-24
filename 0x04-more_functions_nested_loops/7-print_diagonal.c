#include "main.h"
/**
*print_diagonal - prints diagonal line
*@n: number of times to print line
*Return: \ on success: otherwise \n if n<= 0
*/
void print_diagonal(int n)
{
int c;
if (n <= 0)
{
_putchar('\n');
}
	else
	{
	for (c = 1; c <= n; c++)
		{
		_putchar('\');
		}
	_putchar('\n');
	}
}
