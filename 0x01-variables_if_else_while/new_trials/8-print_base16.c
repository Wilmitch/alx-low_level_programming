#include <stdio.h>

/**
 * main - entry point
 * This program prints all the numbers of base 16 in lower case
 * followed by new line
 * Only does this using putchar function
 * Return: 0 always on success
 */
int main(void)
{
	int x;
	char c;

	for (x = 48; x < 58; x++)
		putchar(x);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
