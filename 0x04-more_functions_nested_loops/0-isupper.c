#include "main.h"
/**
*_isupper - a function to check for uppercase x'ter
*@c:x'ter to be checked
*Return: 1 on success, or otherwise 0
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);

}
