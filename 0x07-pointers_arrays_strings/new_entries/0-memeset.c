#include "main.h"

/**
 * _memeset - fills the first n bytes of the memory area
 * pointed to by s with a constant byte b
 * @s: given string
 * @b: the constant byte
 * @n: number of bytes to be filled
 * Return: pointer to the resulting string.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
