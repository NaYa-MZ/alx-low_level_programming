#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: string to be appended
 * @src: string to be appended to
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{

int a, b;
a = 0;
b = 0;
while (dest[a] != '\0')
a++;
while (src[b] != '\0')
	{
	dest[a] = src[b];
	b++;
	a++;
	}
dest[a] = '\0';

return (dest);
}
