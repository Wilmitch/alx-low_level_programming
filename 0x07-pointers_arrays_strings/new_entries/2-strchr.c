#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: the given string
 * @c: character to check for
 * Return: pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	int i;

	/*while (s[i])
	{
		i = *s++;
		if (i == c)
			return (s - 1);
		if (i == 0)
			return (NULL);
	}
	*/
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
			break;
		}
		if (s[i] == 0)

			return (NULL);

	}

}
