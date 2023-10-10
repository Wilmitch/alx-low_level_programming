#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the null byte
 * to the buffer pointed to by dest
 * @dest: pointer to the destination buffer
 * @src: pointer to the source of string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	len = i;

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
