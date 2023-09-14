#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: 1 if c is a digit
 * Return: 0 if c isnt a digit
 */
int main(void)
{
	char c;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
