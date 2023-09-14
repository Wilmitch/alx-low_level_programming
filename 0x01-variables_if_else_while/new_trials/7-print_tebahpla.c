#include <stdio.h>

/**
 * main - entry point
 * This program prints lowercase alphabet in reverse followed by new line.
 * Only uses putchar to do this
 * Return: 0 always on success.
 */
int main(void)
{
	char c;
	int x;

	x = 0;
	c = 'z';
	while (x < 26)
	{
		putchar(c);
		x++;
		c--;
	}
	putchar('\n');
	return (0);
}
