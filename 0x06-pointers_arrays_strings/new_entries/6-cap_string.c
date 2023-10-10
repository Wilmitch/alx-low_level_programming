#include "main.h"

/**
 * cap_string - function that capitalizes all words if a string
 * separators of words: space,tab, n/line,,;.!?\"(){}
 * @s: The string
 * Return: pointer to resulting string
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		while (!(s[i] >= 'a' && s[i] <= 'z'))
			i++;
		if (s[i - 1] == ' ' ||
			s[i - 1] == '\t' ||
			s[i - 1] == '\n' ||
			s[i - 1] == ',' ||
			s[i - 1] == ';' ||
			s[i - 1] == '.' ||
			s[i - 1] == '!' ||
			s[i - 1] == '?' ||
			s[i - 1] == '"' ||
			s[i - 1] == '(' ||
			s[i - 1] == ')' ||
			s[i - 1] == '{' ||
			s[i - 1] == '}' ||
			i == 0)
			s[i] -= 32;
		i++;
	}
	return (s);
}
