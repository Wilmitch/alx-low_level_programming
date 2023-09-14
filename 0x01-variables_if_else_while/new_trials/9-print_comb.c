#include <stdio.h>

/**
 * main - entry point
 * This program prints all possible combinations of single-digit numbers
 * followed by new line
 * It only uses putchar a max of 4 times.
 * Return: 0 always on success
 */
int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
		if (x < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
