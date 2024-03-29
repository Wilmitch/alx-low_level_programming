#include <stdio.h>
#include "main.h"

/**
 * _strstr - locates a substring on the first occurence of substring needle
 * in the string haystack but excluding comparing \0.
 * @needle: substring to look for
 * @haystack: the string to search in
 * Return: pointer to the beginning of the located substring, or NULL
 * if substring not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
