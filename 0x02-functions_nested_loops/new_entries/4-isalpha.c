#include <stdio.h>

/**
 * _isalpha: function that checks for alphabet character
 *
 * Return: 1 if letter, lowercase or uppercase. Otherwise 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
