#include "main.h"
/**
* print_sign- It prints the sign of a number
* Description: function that prints sign of a number
* @n : number whose sign is to be checked
* Return: 1 if n is greater than zero: 0 and print 0 if n is zero:
*or -1 if n is less than zero
*/
int print_sign(int n)
{
int r;
if (n > 0)
{
r = 1;
_putchar('+');
}
else if (n == 0)
{
r = 0;
_putchar('0');
}
else
{
r = -1;
_putchar('-');
}
return (r);
}

