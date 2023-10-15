#include "main.h"

/**
 * _memcpy - copies memory area, copies n bytes from memory
 * area src to memory area dest.
 * @dest: destination to copy
 * @src: source to copy from
 * @n: number of bytes to be copied
 * Return: pointer to resulting string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
