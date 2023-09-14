#include <stdio.h>

/**
 * main - entry point
 * This program prints all possible different combinations of two digits
 * These numbers must be separated by , and space
 * The two digits must be different
 * Print the smallest combination of the two digits.
 * Only use putchar max 5 times
 * Return: 0 always on success/
 */
int main(void)
{
	int x, y;

	for (x = 48; x <= 56; x++)
	{
		for (y = 49; y <= 57; y++)
		{
			if (x < y)
			{
				putchar(x);
				putchar(y);
				if (x != 56 || y != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

