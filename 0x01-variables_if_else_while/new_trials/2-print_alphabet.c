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
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
