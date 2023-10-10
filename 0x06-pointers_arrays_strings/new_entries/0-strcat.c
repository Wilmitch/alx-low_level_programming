#include "main.h"

/**
 * _strcat - concatenates two strings by appending src to the dest
 * @src: string to be concatenated to dest
 * @dest: the destination string
 *
 * Return: pointer to our resulting string
 */
char *_strcat(char *dest, char *src)
{
	int len1, len2;

	len1 = 0;
	while (dest[len1] != '\0')
	{
		len1++;
	}
	for (len2 = 0; src[len2]; len2++)
	{
		dest[len1++] = src[len2];
	}
	return (dest);
}
