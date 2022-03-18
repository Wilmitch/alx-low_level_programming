#include <stdio.h>

/**
 * main - Entry point
 *
 * Return 0 on success. Error code otherwise
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
