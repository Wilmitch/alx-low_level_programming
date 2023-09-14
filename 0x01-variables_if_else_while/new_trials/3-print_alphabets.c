#include <stdio.h>

/**
 * main entry point
 * This program prints alphabet in lowercase then uppercase
 * followed by new line
 * Return: 0 always on success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
