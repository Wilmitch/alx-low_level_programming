#include <stdio.h>

/**
 * main - entry point
 * This program prints all possible different combs of three digits
 * all numbers are separated by coma and space
 * print only the smallest combinations of three digits in ascending order.
 * This only using putchar function max 6 times
 * Return: 0 always on success
 */
int main(void)
{
	int x, y, z;

	for (x = 48; x <= 55; x++)
	{
		for (y = 49; y <= 56; y++)
		{
			for (z = 50; z <= 57; z++)
			{
				if (x < y && y < z)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x != 55 || y != 56 || z != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
