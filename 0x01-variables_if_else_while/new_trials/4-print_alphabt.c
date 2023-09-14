#include <stdio.h>

/**
 * main - entry point
 * This program will print the alphabet in lowercase except
 * letter q and e followed by new line using only the putchar
 * function.
 * Return: 0 always on success.
 */
int main(void)
{
	char c;
	int x;

	c = 'a';
	x = 0;
	while (x < 26)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
		x++;
		c++;
	}
	putchar('\n');
	return (0);
}
