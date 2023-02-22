#include "main.h"
/**
*print_alphabet_x10 - Writes alphabets in their lowercases for 10 times
*/
void print_alphabet_x10(void)
{
char letter;
int i = 0;
	while (i < 10)
	{
	letter =  'a';
		while (letter <= 'z')
		{
		_putchar(letter);
		letter++;
		}
	_putchar('\n');
	i++;
	}

}
