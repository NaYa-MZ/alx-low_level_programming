#include "main.h"

/**
 * _isalpha - checks if x'ters are alphabets
 * @c : x'ter whose case is to be checked
 * Return: 1 if a succes
 * Otherwise return 0
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}

