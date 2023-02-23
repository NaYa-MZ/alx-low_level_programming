#include "main.h"
/**
*_isdigit - to check for digits
*@c: is the x'ter to be checked
*Return: 1 on success: 0 if otherwise
*/
int _isdigit(int c)
{
if (c >= 0 && c <= 9)
return (1);
else
return (0);

}
