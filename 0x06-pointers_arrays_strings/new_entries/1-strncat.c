#include "main.h"

/**
 * _strncat - concatenates two strings but it will use at most n bytes
 * from the src string.
 * src doesnt need to be null terminated if it contains n or more bytes
 * @src: source string
 * @dest: destination string
 * @n: number of bytes to be concatenated to string dest
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1, len2;

	len1 = 0;
	while (dest[len1] != '\0')
	{
		len1++;
	}
	for (len2 = 0; src[len2] && len2 < n; len2++)
	{
		dest[len1++] = src[len2];
	}
	return (dest);
}
