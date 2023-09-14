#include <stdio.h>

/**
 * main - entry point
 * This program prints all single digit numbers of base 10 starting from 0
 * followed by new line.
 * It also uses only putchar twice max.
 * Return: 0 always on success.
 */
int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
