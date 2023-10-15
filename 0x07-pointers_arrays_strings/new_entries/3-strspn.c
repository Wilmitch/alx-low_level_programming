#include "main.h"

/**
 * _strspn - function gets the length of a prefix substring
 * @s: the string to be evaluated
 * @accept: string containing the list of characters to match s
 * Return: the number of bytes in the initial segment of s which
 * consists of bytes from accept string.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count, checker;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		checker = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				checker = 1;
			}
		}
		if (checker == 0)
		{
			return (count);
		}
	}
	return (0);
}
