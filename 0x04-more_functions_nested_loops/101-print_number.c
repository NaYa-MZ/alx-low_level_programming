#include "main.h"
/**
*print_number - prints intergers
*@n: interger
*Return: number
*/
void print_number(int n)
{
unsigned int c = n;
if (n < 0)
{
_putchar('-');
c = -c;
}
if ((c / 10) > 0)
print_number(c / 10);

_putchar((c % 10) + '0');

}
