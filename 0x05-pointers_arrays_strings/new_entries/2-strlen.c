#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: pointer to the first char of the string
 *
 * Return: integer for the number of chars
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
