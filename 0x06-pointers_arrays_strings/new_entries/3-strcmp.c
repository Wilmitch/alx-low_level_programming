#include "main.h"

/**
 * _strcmp - compares  two strings
 * @s1: first string in comparison
 * @s2: second string in comparison
 * Return: if s1 < s2, return a negative integer
 * 	else if s1 = s2, return 0
 * 	else if s1 > s2, return a positive integer
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
