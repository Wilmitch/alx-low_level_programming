#include "main.h"

/**
 * _isupper - function will check for uppercase character
 * @c: the character to be checked.
 * Return: 1 if c is uppercase
 * Return: 0 if c is not uppercase
 */
int _isupper(int c)
{
	if (c >= 64 && c <= 90)
		return (1);
	else
		return (0);
}
