#include "main.h"

/**
 * _strncpy - copies a string into another
 * @dest: destination string
 * @src: the source string
 * @n: number of bytes to be copied
 * Return: pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		while (*src)
		{
			*dest = *src;
			src++;
			dest++;
		}
	}
	return (dest);
}
