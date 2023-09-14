#include <stdio.h>

/**
 * main - entry point
 * Program that prints the alphabet in lowercase followed by new line.
 * using the Putchar function.
 * Return 0 always on success
 */
int main(void)
{
	char c;

	c = 'a';
	do {
		putchar(c);
		c++;
	} while (c <= 'z');
	putchar('\n');
	return (0);
}
