#include "main.h"
/**
*_islower  - checks for lowercase x'ter
*@c: the x'ter to be checked
*Return: 1 if c is lowercase or 0 if otherwise
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);

}
