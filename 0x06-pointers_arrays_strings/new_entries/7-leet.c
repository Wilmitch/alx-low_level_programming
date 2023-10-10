#include "main.h"

/**
 * leet - encodes a string into 1337
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 *
 * @s: string given
 * Return: pointer to resulting string
 */
char *leet(char *s)
{
	int i, j;

	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	i = 0;
	while (s[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (s[i] == leet[j] ||
				s[i] - 32 == leet[j])
				s[i] = j + '0';
		}
		i++;
	}
	return (s);
}
