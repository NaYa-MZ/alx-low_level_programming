#include "main.h"

/**
 * string_toupper - fnx that changes all lowercase letters to uppercase
 * @s: string to modify
 * Return: the string
 */
char *string_toupper(char *s)
{
int b;
for (b = 0; s[b] != '\0'; b++)
	{
	if (s[b] >= 'a' && s[b] <= 'z')
		s[b] = s[b] - 32;
	}

return (s);
}
