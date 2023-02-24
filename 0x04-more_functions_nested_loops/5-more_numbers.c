#include "main.h"
/**
*more_numbers - function that prints 0 to 14 for ten times
*Return: 0 to 14 for 10times
*/
void more_numbers(void)
{
int c, i;
for (i = 0; i <= 10; i++)
	{
	for (c = 0; c <= 14; c++)
		{
		if (c > 9)
		_putchar((c / 10) + '0');
		_putchar((c % 10) + '0');
		}
_putchar('\n');
	}
}
