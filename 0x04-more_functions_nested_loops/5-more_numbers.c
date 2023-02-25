#include "main.h"
/**
*more_numbers - function that prints 0 to 14 for ten times
*Return: 0 to 14 for 10times
*/
void more_numbers(void)
{
int c, i;
for (c = 0; c < 10; c++)
	{
	for (i = 0; i < 15; i++)
		{
		if (i >= 10)
		_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
		}
_putchar('\n');
	}
}
