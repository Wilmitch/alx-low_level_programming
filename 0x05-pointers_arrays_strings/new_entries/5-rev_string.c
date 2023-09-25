#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int i, start, end;
	char tmp;

	/*This will help get the string length*/
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	start = 0;
	end = i - 1;

	/*this will reverse the characters of string*/
	while (start < end)
	{
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;
		start++;
		end--;
	}
}
